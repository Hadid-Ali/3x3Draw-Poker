using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public static partial class GameData 
{
    public static class RuntimeData
    {
        public static bool IS_LOGGED_IN = false;
        public static string USER_NAME = string.Empty;
        
        public static int TOTAL_SCORE
        {
            get;
            private set;
        }

        public static void ResetTotalScore()
        {
            TOTAL_SCORE = 0;
        }
        
        public static void AddToTotalScore(int score)
        {
            TOTAL_SCORE += score;
            Debug.LogError($"Total Score {TOTAL_SCORE.ToString()}");
        }
    }
}
