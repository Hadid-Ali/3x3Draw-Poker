
public static partial class GameEvents
{
    public static class MenuEvents
    {
        public static GameEvent<string> NetworkStatusUpdated = new();
        public static GameEvent<string, float> TimeBasedActionRequested = new();
    }
}
