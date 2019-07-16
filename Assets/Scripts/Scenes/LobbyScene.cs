using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class LobbyScene : MonoBehaviour
{
    public static LobbyScene Instance { get; set; }

    public JoinButton[] joinButtons;
    TMP_InputField usernameField;

    public bool loginSucces = false;


    void Start()
    {
        Instance = this;
        joinButtons = FindObjectsOfType<JoinButton>();
        usernameField = FindObjectOfType<TMP_InputField>();
        usernameField.characterLimit = 17;
    }

    void Update()
    {
        if (usernameField.text != "" && loginSucces == false)
            foreach (JoinButton button in joinButtons)
                button.GetComponent<Button>().interactable = true;
        else
            foreach (JoinButton button in joinButtons)
                button.GetComponent<Button>().interactable = false;
    }

    public void OnClickHost()
    {
        string username = GameObject.Find("CreateUsername").GetComponent<TMP_InputField>().text;
        Client.Instance.SendCreateAccount(username, "host");
    }

    public void OnClickJoin()
    {
        string username = GameObject.Find("CreateUsername").GetComponent<TMP_InputField>().text;
        Client.Instance.SendCreateAccount(username, "join");
    }
}
