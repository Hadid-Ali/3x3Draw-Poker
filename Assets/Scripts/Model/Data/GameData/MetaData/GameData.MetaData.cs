using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static partial class GameData
{
    public static class MetaData
    {
        public const int HandWinReward = 10;
        public const int DecksCount = 3;
        public const int DeckSize = 5;

        public const int TotalScoreToWin = 10;
        
        public const int OffsetCards = 2;

        public const int MinimumNameLength = 3;
        public const int MaximumNameLength = 8;

        public const int MaxPlayersLimit = 3;
        public const int MinimumRequiredPlayers = 2;
        public const int WaitBeforeAutomaticMatchStart = 10;

        public const string PrivacyPolicyLink = "www.google.com";
        public const string TermsOfUsageLink = "www.google.com";
    }
}