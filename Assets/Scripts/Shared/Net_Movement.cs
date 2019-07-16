[System.Serializable]
public class Net_Movement : NetMsg
{
    public Net_Movement(Net_PlayerInfo player)
    {
        this.player = player;
        OperationCode = NetOperationCode.movement;
    }

    public float xMov { set; get; }
    public float zMov { set; get; }

    public Net_PlayerInfo player { private set; get; }
}