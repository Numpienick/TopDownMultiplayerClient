using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HubScene : MonoBehaviour
{
    public static HubScene Instance { private set; get; }

    [SerializeField] GameObject hostInformationPrefab;
    [SerializeField] GameObject playerInformationPrefab;
    [SerializeField] Sprite readySprite;
    [SerializeField] Sprite notReadySprite;

    float y = 0;
    List<Dictionary<GameObject, string>> playerObjects = new List<Dictionary<GameObject, string>>();


    void Start()
    {
        Instance = this;
    }

    public void GetNames()
    {
        for (int i = 0; i < Client.Instance.roPlayers.Count; i++)
        {
            Net_PlayerInfo player = Client.Instance.roPlayers[i];

            bool playerSpawned = false;
            for (int j = 0; j < playerObjects.Count; j++)
            {
                if (playerObjects[j].ContainsValue(player.userName))
                {
                    playerSpawned = true;
                    break;
                }
            }

            if (!playerSpawned)
            {
                if (player.playerType == "host")
                    InstantiatePrefab(player, hostInformationPrefab);

                if (player.playerType == "join")
                    InstantiatePrefab(player, playerInformationPrefab);
            }
        }
    }

    void InstantiatePrefab(Net_PlayerInfo player, GameObject prefab)
    {
        GameObject playerList = GameObject.Find("PlayerList");

        GameObject user = Instantiate(prefab, playerList.transform, false);
        user.GetComponentInChildren<TextMeshProUGUI>().text = player.userName;
        user.transform.position = new Vector3(user.transform.position.x, user.transform.position.y - y, user.transform.position.z);

        Dictionary<GameObject, string> playerDictionary = new Dictionary<GameObject, string>();
        playerDictionary.Add(user, player.userName);
        playerObjects.Add(playerDictionary);
        y += 25;
    }

    public void RemovePlayers(string playerName)
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            Dictionary<GameObject, string> currPlayer = playerObjects[i];
            if (currPlayer.ContainsValue(playerName))
            {
                foreach (GameObject obj in currPlayer.Keys)
                    Destroy(obj);
                playerObjects.Remove(currPlayer);
                y -= 25;
            }
        }
    }

    public void ClientQuit()
    {
        Client.Instance.DisconnectFromServer();
    }

    public void ReadyUp()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            Dictionary<GameObject, string> player = playerObjects[i];
            if (player.ContainsValue(Client.Instance.self.userName))
            {
                List<GameObject> playerObj = new List<GameObject>(player.Keys);
                Sprite currentSprite = playerObj[0].GetComponentsInChildren<Image>()[1].sprite;
                if (currentSprite == notReadySprite)
                    currentSprite = readySprite;
                else
                    currentSprite = notReadySprite;
                playerObj[0].GetComponentsInChildren<Image>()[1].sprite = currentSprite;
                Client.Instance.Ready();
                break;
            }
        }
    }
}
