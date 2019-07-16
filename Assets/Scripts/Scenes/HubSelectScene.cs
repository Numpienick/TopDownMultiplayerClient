using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;

public class HubSelectScene : MonoBehaviour
{
    public static HubSelectScene Instance { private set; get; }

    //List of instantiated hubs
    List<GameObject> spawnedHubs = new List<GameObject>();
    //Currently selected hub
    GameObject selectedHub;

    public GameObject hubInfoPrefab;

    float y = 0;

    void Start()
    {
        Instance = this;
    }

    public void ShowHubs()
    {
        GameObject eventSystemObject = GameObject.Find("EventSystem");
        EventSystem eventSystem = eventSystemObject.GetComponent<EventSystem>();

        GameObject parent = GameObject.Find("HubList");
        NoHubs noHubs = FindObjectOfType<NoHubs>();
        if (Client.Instance.roHubs.Count > 0)
        {
            if (noHubs != null)
                noHubs.gameObject.SetActive(false);

            for (int i = 0; i < Client.Instance.roHubs.Count; i++)
            {
                for (int j = 0; j < spawnedHubs.Count; j++)
                {
                    Debug.Log(spawnedHubs[j]);
                    if (spawnedHubs[j].GetComponentInChildren<TextMeshProUGUI>().text == Client.Instance.roHubs[i].hubName)
                    {
                        spawnedHubs.Remove(spawnedHubs[j]);
                        Destroy(spawnedHubs[j]);
                        y -= 25;
                    }
                }
                GameObject hub = Instantiate(hubInfoPrefab, parent.transform, false);
                hub.GetComponentInChildren<TextMeshProUGUI>().text = Client.Instance.roHubs[i].hubName;
                hub.GetComponent<Button>().onClick.AddListener(delegate { SelectHub(eventSystem); });
                hub.transform.position = new Vector3(hub.transform.position.x, hub.transform.position.y - y, hub.transform.position.z);
                spawnedHubs.Add(hub);
            }
            y += 25;
        }
    }


    public void SelectHub(EventSystem eventSystem)
    {
        selectedHub = eventSystem.currentSelectedGameObject;
    }

    public void JoinLobby()
    {
        Client.Instance.JoinHub(selectedHub.GetComponentInChildren<TextMeshProUGUI>().text);
    }

    public void ReturnToMenu()
    {
       Client.Instance.DisconnectFromServer();
    }
}