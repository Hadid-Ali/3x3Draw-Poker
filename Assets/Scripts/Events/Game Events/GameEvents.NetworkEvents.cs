
public static partial class GameEvents
{
    public static class NetworkEvents
    {
        public static GameEvent LocalPlayerJoined = new();
        public static GameEvent<PlayerController> NetworkPlayerJoined = new();
        public static GameEvent<string> PlayerReceiveCardsData = new();
    }
}
