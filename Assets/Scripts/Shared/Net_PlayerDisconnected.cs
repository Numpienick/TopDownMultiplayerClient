[System.Serializable]
public class Net_PlayerDisconnected : NetMsg
{
    public Net_PlayerDisconnected(Net_PlayerInfo player)
    {
        this.player = player;
        OperationCode = NetOperationCode.playerDisconnected;
    }
    public Net_PlayerInfo player { private set; get; }
}
