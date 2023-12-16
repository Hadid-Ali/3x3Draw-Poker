using System;
using UnityEngine;

[Serializable]
public class NetworkPlayerScoreObject
{
    public int PlayerID;
    public int TotalScore;

    public static string Serialize(NetworkPlayerScoreObject scoreObject) => JsonUtility.ToJson(scoreObject);
    public static NetworkPlayerScoreObject DeSerialize(string jsonData) => JsonUtility.FromJson<NetworkPlayerScoreObject>(jsonData);
}
