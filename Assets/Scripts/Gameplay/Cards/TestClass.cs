using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestClass : MonoBehaviour
{
    // [SerializeField] private Handd hand1;
    // [SerializeField] private List<Image> Cards;
    // [SerializeField] private List<Image> ShuffledCards;
    //
    // [SerializeField] private Handd Besthand1;
    // [SerializeField] private Handd Besthand2;
    // [SerializeField] private Handd Besthand3;
    //
    //
    //
    // [ContextMenu("Test Cards")]
    // private void TestCards()
    // {
    //     
    //     for (int i = 0; i < 10; i++)
    //     {
    //         int cardType = Random.Range(0, 4);
    //         int cardValue = Random.Range(0,13);
    //         
    //         hand1.Add(new CardData((CardType) cardType, (Cardvalue) cardValue));
    //         Cards[i].sprite = CardsRegistery.GetCardSpriteS((CardType)cardType,(Cardvalue) cardValue);
    //     }
    //
    //     Besthand1 =  CombinationСalculator.GetBestHanddEfficiently(hand1);
    //
    //     for (int i = 0; i < Besthand1._Handd.Count; i++)
    //     {
    //         hand1.Remove(Besthand1._Handd[i]);
    //         ShuffledCards[i].sprite = CardsRegistery.GetCardSpriteS(Besthand1._Handd[i].type,Besthand1._Handd[i].value);
    //     }
    //
    //     
    //     Besthand2 =  CombinationСalculator.GetBestHandd(hand1);
    //     
    //     for (int i = 0; i < Besthand2._Handd.Count; i++)
    //     {
    //         hand1.Remove(Besthand2._Handd[i]);
    //         ShuffledCards[i+5].sprite = CardsRegistery.GetCardSpriteS(Besthand2._Handd[i].type,Besthand2._Handd[i].value);
    //     }
    //     
    //     Besthand3 =  CombinationСalculator.GetBestHandd(hand1);
    //     for (int i = 0; i < Besthand3._Handd.Count; i++)
    //     {
    //         ShuffledCards[i+10].sprite = CardsRegistery.GetCardSpriteS(Besthand3._Handd[i].type,Besthand3._Handd[i].value);
    //     }
    // }
}
