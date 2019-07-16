[System.Serializable]
public class Net_PlayerInfo : NetMsg
{
    public Net_PlayerInfo(int connectionId, string userName, string playerType)
    {
        this.connectionId = connectionId;
        this.userName = userName;
        this.playerType = playerType;
        OperationCode = NetOperationCode.playerInfo;
    }

    public bool ready { set; get; }
    public string joinedHub { set; get; }

    public string userName { private set; get; }
    public string playerType { private set; get; }
    public int connectionId { private set; get; }
}