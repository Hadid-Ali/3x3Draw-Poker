using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkDataObject
{
    public List<CardData[]> PlayerDecks { get; private set; }
    public int PhotonViewID { get; private set; }

    public NetworkDataObject(List<CardData[]> decks, int photonViewID)
    {
        PlayerDecks = decks;
        PhotonViewID = photonViewID;
    }
}
