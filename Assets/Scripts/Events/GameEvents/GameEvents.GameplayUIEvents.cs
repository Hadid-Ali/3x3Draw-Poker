
public static partial class GameEvents
{
    public static class GameplayUIEvents
    {
        public static GameEvent SubmitDecks = new();
        public static GameEvent EvaluateDeck = new();

        public static GameEvent<int> PlayerRewardReceived = new();
        
        public static GameEvent<Card[]> CardsArrangementUpdated = new();
        public static GameEvent DeckArrangementUpdated = new();

        public static GameEvent<string> ErrorOccured = new();
    }
}