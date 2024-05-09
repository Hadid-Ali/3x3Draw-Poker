
public static partial class GameEvents
{
    public static class MenuEvents
    {
        public static GameEvent<string> NetworkStatusUpdated = new();
        public static GameEvent<string, float> TimeBasedActionRequested = new();
        public static GameEvent<MenuName> MenuTransitionEvent = new();
        public static GameEvent<string> LoginAtMenuEvent = new();
        public static GameEvent FacebbokLoginAtMenuEvent = new();
        public static GameEvent EmailLoginFailEvent = new();
        public static GameEvent RegisterFailEvent = new();
        public static GameEvent EmailLoginSuccessEvent = new();
        public static GameEvent RegisterSuccessEvent = new();
        public static GameEvent FacebookLoginSuccessEvent = new();
        public static GameEvent<string,string> EmailLoginAtMenuEvent = new();
        public static GameEvent<string,string> GamecenterLoginAtMenuEvent = new();
        public static GameEvent<string,string,string> RegisterAtMenuEvent = new();
        public static GameEvent<string> OnFacebbokLoginGetDataEvent = new();
        public static GameEvent<string> OnEmailRecoverEvent = new();
    }
}
