[System.Serializable]
public class Net_CreateAccount : NetMsg
{
    public Net_CreateAccount(string userName, string playerType)
    {
        this.userName = userName;
        this.playerType = playerType;
        OperationCode = NetOperationCode.createAccount;
    }

    public string userName { private set; get; }
    public string playerType { private set; get; }
}
