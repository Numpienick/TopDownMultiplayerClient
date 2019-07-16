[System.Serializable]
public class Net_HubInfo : NetMsg
{
    public Net_HubInfo(string hubName, Net_PlayerInfo host)
    {
        this.hubName = hubName;
        this.host = host;
        OperationCode = NetOperationCode.hubInfo;
    }
    public string hubName { private set; get; }
    public Net_PlayerInfo host { private set; get; }
    public System.Collections.Generic.List<Net_PlayerInfo> players { set; get; }
}
