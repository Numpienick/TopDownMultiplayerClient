public static class NetOperationCode
{
    public const int none = 0;

    public const int createAccount = 1;

    public const int onCreateAccount = 2;

    public const int playerInfo = 3;

    public const int hubInfo = 4;

    public const int playerDisconnected = 5;

    public const int readyUp = 6;

    public const int movement = 7;
}

[System.Serializable]
public abstract class NetMsg
{
    public byte OperationCode { set; get; }

    public NetMsg()
    {
        OperationCode = NetOperationCode.none;
    }
}
