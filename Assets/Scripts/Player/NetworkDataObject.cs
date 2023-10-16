using System;
using UnityEngine;
using System.Collections.Generic;

[Serializable]
public class NetworkDataObject
{
    public List<CardData> PlayerDecks = new();
    public int PhotonViewID;

    public NetworkDataObject(List<CardData[]> decks, int photonViewID)
    {
        for (int i = 0; i < decks.Count; i++)
        {
            for (int j = 0; j < decks[i].Length; j++)
            {
                PlayerDecks.Add(decks[i][j]);
            }
        }
        PhotonViewID = photonViewID;
    }
    
    public static string Serialize(NetworkDataObject networkDataObject)
    {
        string data = JsonUtility.ToJson(networkDataObject);
        return data;
    }

    public static NetworkDataObject DeSerialize(string dataString)
    {
        return JsonUtility.FromJson<NetworkDataObject>(dataString);
    }
}
