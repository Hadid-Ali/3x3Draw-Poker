using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestClass : MonoBehaviour
{
     [SerializeField] private CardData[] cards;

     private Handd hand1 = new();
     [SerializeField] private Handd Besthand1 = new();
     
     [ContextMenu("Evaluate Cards")]
     private void TestCards()
     {
         HandTypes hand = HandTypes.HighCard;
         HandEvaluator.Evaluate(cards, out hand);
         
         print($"Hand Evaluated is : {hand.ToString()}");
     }

     [ContextMenu("Get Best Hand")]
     private void GetBestHand()
     {
         foreach (var v in cards)
            hand1.Add(v);
         
         Besthand1 = CombinationСalculator.GetBestHanddEfficiently(hand1);
     }
}
