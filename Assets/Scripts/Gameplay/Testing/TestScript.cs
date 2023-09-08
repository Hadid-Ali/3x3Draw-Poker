using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class TestScript : MonoBehaviour
{
    [SerializeField] private CardData[] cards;
    [SerializeField] private CardData[] cards2;
    
    [SerializeField] [ReadOnlyInspector] private HandTypes Player1Handtype;
    [SerializeField] [ReadOnlyInspector] private HandTypes Player2Handtype;
    
    [SerializeField] [ReadOnlyInspector] private string Winner;

    private Hand hand1;
    private Hand hand2;
    
    

    [ContextMenu("Compare Hands")]
    public void EvaluateHands()
    {
        Player1Handtype = HandTypes.HighCard;
        HandEvaluator.Evaluate(cards, out Player1Handtype);
        
        Player2Handtype = HandTypes.HighCard;
        HandEvaluator.Evaluate(cards2, out Player2Handtype);
        
        hand1 = new Hand(cards, Player1Handtype);
        hand2 = new Hand(cards2, Player2Handtype);

        Winner = DeepEvaluateDrawedDecks.ComparePokerHands(hand1, hand2, out Player1Handtype, out Player2Handtype);

        Player1Handtype = hand1._HandType;
        Player2Handtype = hand2._HandType;
    }
    
    
}
