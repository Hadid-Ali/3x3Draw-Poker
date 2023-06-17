using System;
using UnityEngine;
using System.Collections.Generic;

[Serializable]
public class NetworkDataObject
{
    public List<CardData[]> PlayerDecks;
    public int PhotonViewID;

    public NetworkDataObject(List<CardData[]> decks, int photonViewID)
    {
        PlayerDecks = decks;
        PhotonViewID = photonViewID;
    }
    
    public static string Serialize(NetworkDataObject networkDataObject)
    {
        string data = JsonUtility.ToJson(networkDataObject);
        
        Debug.LogError($"{data}");
        return data;
    }

    public static NetworkDataObject DeSerialize(string dataString)
    {
        return JsonUtility.FromJson<NetworkDataObject>(dataString);
    }
}
