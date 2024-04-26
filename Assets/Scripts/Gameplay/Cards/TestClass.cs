using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestClass : MonoBehaviour
{
     [SerializeField] private CardData[] cards;

     [ContextMenu("Evaluate Cards")]
     private void TestCards()
     {
         HandTypes hand = HandTypes.HighCard;
         HandEvaluator.Evaluate(cards, out hand);
         
         print($"Hand Evaluated is : {hand.ToString()}");
     }
}
