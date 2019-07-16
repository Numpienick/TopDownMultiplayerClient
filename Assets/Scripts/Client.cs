using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

class PlayerObject
{
    public PlayerObject(GameObject obj, Net_PlayerInfo player)
    {
        this.obj = obj;
        this.player = player;
    }
    public GameObject obj { private set; get; }
    public Net_PlayerInfo player { private set; get; }
}

/// <summary>
/// This class holds all information about the connected host
/// and communicates with the server by sending and receiving messages
/// </summary>
public class Client : MonoBehaviour
{
    /// <summary>
    /// PlayerInfo about the Client
    /// </summary>
    public Net_PlayerInfo self { private set; get; }

    const int MAX_USER = 6;
    const int PORT = 62480;
    const int BYTE_SIZE = 1024;
    const string SERVER_IP = "127.0.0.1";

    [SerializeField] GameObject playerPrefab;

    byte reliableChannel;
    byte unreliableChannel;
    byte error;
    int connectionId;
    int hostId;
    bool isStarted = false;
    float spawnOffset = 0;
    Net_Movement selfMov;
    GameObject myObj;

    /// <summary>
    /// Static reference to the Client script
    /// </summary>
    public static Client Instance { private set; get; }

    List<Net_PlayerInfo> players = new List<Net_PlayerInfo>();
    /// <summary>
    /// ReadOnly list of the players in the Client's game
    /// </summary>
    public ReadOnlyCollection<Net_PlayerInfo> roPlayers
    {
        get
        {
            return players.AsReadOnly();
        }
    }

    List<Net_HubInfo> hubs = new List<Net_HubInfo>();
    /// <summary>
    /// List of hubs available to join
    /// </summary>
    public ReadOnlyCollection<Net_HubInfo> roHubs
    {
        get
        {
            return hubs.AsReadOnly();
        }
    }
    List<PlayerObject> playerObjects = new List<PlayerObject>();


    #region MonoBehaviour
    void Start()
    {
        //Removes the old client if it joins back to the main menu
        Client[] clients = FindObjectsOfType<Client>();
        if (clients.Length > 1)
        {
            Client returnedClient = clients[0];
            SceneManager.MoveGameObjectToScene(returnedClient.gameObject, SceneManager.GetActiveScene());
            returnedClient.DisconnectFromServer();
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
        InitializeConnection();
    }

    void Update()
    {
        UpdateMessagePump();
    }

    void LateUpdate()
    {
        if (playerObjects.Count > 0)
        {
            float xMov = Input.GetAxis("Horizontal");
            float zMov = Input.GetAxis("Vertical");
            if (Input.GetAxis("Horizontal") != 0 || Input.GetAxis("Vertical") != 0)
            {
                myObj.transform.Translate(xMov, 0, zMov);
                SendMovement(xMov, zMov);
            }
        }
    }
    #endregion

    //Everything server related
    void InitializeConnection()
    {
        NetworkTransport.Init();

        ConnectionConfig cc = new ConnectionConfig();
        reliableChannel = cc.AddChannel(QosType.Reliable);
        unreliableChannel = cc.AddChannel(QosType.Unreliable);

        HostTopology topo = new HostTopology(cc, MAX_USER);

        hostId = NetworkTransport.AddHost(topo, 0);

        connectionId = NetworkTransport.Connect(hostId, SERVER_IP, PORT, 0, out error);

        Debug.Log(string.Format("Attempting to connect on {0}...", SERVER_IP));
        isStarted = true;
    }

    void Shutdown()
    {
        isStarted = false;
        NetworkTransport.Shutdown();
    }

    void UpdateMessagePump()
    {
        if (!isStarted)
            return;

        //Id for the platform where the message comes from
        int recHostId;
        //Which user is sending the message?
        int connectionId;
        //Which lane is he sending that message from
        int channelId;

        //Holds the message that comes through
        byte[] recBuffer = new byte[BYTE_SIZE];
        //Size of the message
        int dataSize;

        NetworkEventType type = NetworkTransport.Receive(out recHostId, out connectionId, out channelId, recBuffer, BYTE_SIZE, out dataSize, out error);
        switch (type)
        {
            case NetworkEventType.Nothing:
                break;

            case NetworkEventType.ConnectEvent:
                Debug.Log("We have connected to the server!");
                break;

            case NetworkEventType.DisconnectEvent:
                Debug.Log("We have been disconnected");
                break;

            case NetworkEventType.DataEvent:
                BinaryFormatter formatter = new BinaryFormatter();
                MemoryStream ms = new MemoryStream(recBuffer);
                NetMsg msg = (NetMsg)formatter.Deserialize(ms);

                OnData(connectionId, channelId, recHostId, msg);
                break;

            default:
            case NetworkEventType.BroadcastEvent:
                Debug.Log("Unexpected network event type");
                break;
        }
    }

    #region OnData
    void OnData(int cnnId, int channelId, int recHostId, NetMsg msg)
    {
        switch (msg.OperationCode)
        {
            case NetOperationCode.none:
                Debug.Log("Unexpected NETOP");
                break;

            case NetOperationCode.onCreateAccount:
                OnCreateAccount((Net_OnCreateAccount)msg);
                break;

            case NetOperationCode.playerInfo:
                PlayersInfo((Net_PlayerInfo)msg);
                break;

            case NetOperationCode.hubInfo:
                AddHub((Net_HubInfo)msg);
                break;
            case NetOperationCode.playerDisconnected:
                RemovePlayer((Net_PlayerDisconnected)msg);
                break;

            case NetOperationCode.readyUp:
                StartCoroutine(LoadGameScene());
                break;

            case NetOperationCode.movement:
                Movement((Net_Movement)msg);
                break;
        }
    }

    void Movement(Net_Movement msg)
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            PlayerObject current = playerObjects[i];
            if (msg.player.userName == current.player.userName)
            {
                current.obj.transform.Translate(msg.xMov, 0f, msg.zMov);
            }
        }
    }

    void RemovePlayer(Net_PlayerDisconnected discPlayer)
    {
        Debug.Log("Removing thing");
        Net_PlayerInfo player = discPlayer.player;
        for (int i = 0; i < players.Count; i++)
        {
            if (players[i].userName == player.userName)
            {
                players.Remove(players[i]);
                break;
            }
        }
        players.Remove(player);
        HubScene.Instance.RemovePlayers(player.userName);

        if (player.playerType == "host" && HubScene.Instance != null)
            DisconnectFromServer();

    }

    void AddHub(Net_HubInfo hub)
    {
        if (!hubs.Contains(hub))
        {
            hubs.Add(hub);
            if (HubSelectScene.Instance != null)
                HubSelectScene.Instance.ShowHubs();
        }
        else
        {
            hubs.Remove(hub);
        }
    }

    void OnCreateAccount(Net_OnCreateAccount oca)
    {
        //Save the data about the player
        self = new Net_PlayerInfo(oca.connectionId, oca.userName, oca.playerType);

        switch (oca.playerType)
        {
            case ("host"):
                {
                    self.joinedHub = string.Format("{0}'s game", self.userName);
                    SendServer(self, reliableChannel);
                    SceneManager.LoadScene("Hub");
                }
                break;

            case ("join"):
                {
                    SendServer(self, reliableChannel);
                    SceneManager.LoadScene("HubSelect");
                }
                break;
        }
    }

    void PlayersInfo(Net_PlayerInfo playerInf)
    {
        for (int i = 0; i < players.Count; i++)
        {
            if (players[i] == playerInf)
                players.Remove(playerInf);
        }
        players.Add(playerInf);
        Debug.Log("Player added: " + playerInf.userName + " Players:  " + players.Count);
        if (HubScene.Instance != null)
        {
            HubScene.Instance.GetNames();
        }
    }
    #endregion

    #region Send
    public void SendServer(NetMsg msg, byte channel)
    {
        //This holds the data
        byte[] buffer = new byte[BYTE_SIZE];

        //Crushes data into a byte[]
        BinaryFormatter formatter = new BinaryFormatter();
        MemoryStream ms = new MemoryStream(buffer);
        formatter.Serialize(ms, msg);

        NetworkTransport.Send(hostId, connectionId, channel, buffer, BYTE_SIZE, out error);
    }

    public void SendCreateAccount(string username, string playerType)
    {
        Net_CreateAccount ca = new Net_CreateAccount(username, playerType);

        SendServer(ca, reliableChannel);
    }

    public void SendSelfToServer()
    {
        SendServer(self, reliableChannel);
    }
    #endregion

    public void JoinHub(string hubName)
    {
        self.joinedHub = hubName;
        SendSelfToServer();
        SceneManager.LoadScene("Hub");
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void DisconnectFromServer()
    {
        NetworkTransport.Disconnect(hostId, connectionId, out error);
        Destroy(gameObject);
        SceneManager.LoadScene("Lobby");
    }

    public void Ready()
    {
        self.ready = !self.ready;
        Net_ReadyUp msg = new Net_ReadyUp(self.connectionId, self.ready);
        SendServer(msg, reliableChannel);
    }

    IEnumerator LoadGameScene()
    {
        SceneManager.LoadScene("Game");

        yield return new WaitUntil(() => SceneManager.GetActiveScene().name == "Game");

        for (int i = 0; i < players.Count; i++)
        {
            Net_PlayerInfo temp = players[i];
            GameObject obj = Instantiate(playerPrefab, new Vector3(0, 3, spawnOffset), Quaternion.identity);
            obj.name = temp.userName;
            Debug.Log("spawning object");

            if (temp.userName == self.userName)
            {
                myObj = obj;
                myObj.GetComponent<Renderer>().material.color = Color.red;
                selfMov = new Net_Movement(temp)
                {
                    xMov = myObj.transform.position.x,
                    zMov = myObj.transform.position.z,
                };
                FindObjectOfType<CameraMovement>().followObject = myObj;
            }
            playerObjects.Add(new PlayerObject(obj, temp));
            spawnOffset += 5;
        }
    }

    public void SendMovement(float x, float z)
    {
        selfMov.xMov = x;
        selfMov.zMov = z;
        SendServer(selfMov, unreliableChannel);
    }
}