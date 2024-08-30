using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardsRegistery : MonobehaviourSingleton<CardsRegistery>
{
    [SerializeField] private List<CardDataObject> m_Cards = new();
    [SerializeField] private List<ItemSO> m_CardBacks = new();

    public Sprite GetCardSprite(CardType cardType, Cardvalue cardValue) =>
        m_Cards.Find(card => card.type == cardType && card.value == cardValue).CardImage;

    public Sprite GetCardSprite(ItemName iName)
    {
        Debug.LogError($"Item {iName}");
     return m_CardBacks.Find(x=>x.itemName == iName).property.Picture;
    }

}
