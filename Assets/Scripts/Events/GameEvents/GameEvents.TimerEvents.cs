
using System;

public static partial class GameEvents
{
    public static class TimerEvents
    {
        public static GameEvent<string,float, Action> ExecuteActionRequest = new();
        public static GameEvent CancelActionRequest = new();
    }
}
