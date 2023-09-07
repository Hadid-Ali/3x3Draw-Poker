using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class TestScript : MonoBehaviour
{
    [SerializeField] private CardData[] cards;
    [SerializeField] private HandType handtype;

    [ContextMenu("Test Card")]
    public void EvaluateHand()
    {
        handtype = HandType.HighCard;
        HandEvaluator.Evaluate(cards, out handtype);
    }


}
