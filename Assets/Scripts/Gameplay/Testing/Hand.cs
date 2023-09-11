using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/HandScriptableObject", order = 1)]
public class Hand : ScriptableObject
{
    public CardData[] CardData;
    public HandTypes _HandType;
    public int photonID;


    public Hand()
    {
        
    }
    public Hand(CardData[] cardData, HandTypes _handType, int _photonID)
    {
        this.CardData = cardData;
        this._HandType = _HandType;
        this.photonID = _photonID;
    }
}
