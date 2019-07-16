[System.Serializable]
public class Net_OnCreateAccount : NetMsg
{
    public Net_OnCreateAccount(int connectionId, string userName, string playerType)
    {
        this.connectionId = connectionId;
        this.userName = userName;
        this.playerType = playerType;
        OperationCode = NetOperationCode.onCreateAccount;
    }

    public int connectionId { private set; get; }
    public string userName { private set; get; }
    public string playerType { private set; get; }
}
