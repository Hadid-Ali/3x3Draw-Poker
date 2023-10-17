using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class PlayerScoreObject
{
    public int UserID;
    public int Score;
    public List<int> WinningHandIndex;

    public PlayerScoreObject(int userID)
    {
        UserID = userID;
        Score = 0;
        WinningHandIndex = new();
    }

    public void AddScore(int score, int handIndex)
    {
        Score += score;
        WinningHandIndex.Add(handIndex);
    }
}
