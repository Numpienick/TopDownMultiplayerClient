[System.Serializable]
public class Net_ReadyUp : NetMsg
{
    public Net_ReadyUp(int connectionId, bool ready)
    {
        this.connectionId = connectionId;
        this.ready = ready;
        OperationCode = NetOperationCode.readyUp;
    }
    public bool ready { private set; get; }
    public int connectionId { private set; get; }
}