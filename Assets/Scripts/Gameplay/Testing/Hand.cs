using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hand : MonoBehaviour
{
    public CardData[] CardData;
    public HandTypes _HandType;

    public Hand(CardData[] cardData, HandTypes _handType)
    {
        this.CardData = cardData;
        this._HandType = _HandType;
    }
}
