using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using UnityEngine;

public class NetworkBotCardsController : MonoBehaviour
{
    [SerializeField] public List<CardData> cards = new();
    [SerializeField] private NetworkPlayerBotController _botController;
    [SerializeField] private PhotonView view;

    [SerializeField] private int cardsReceivedFromId;
    [SerializeField] private int shuffleLimit;


    public void ReceiveHandData(CardData[] obj, int _ID)
    {
        if(_ID != _botController.ID)
            return;

        cardsReceivedFromId = _ID;
        cards.Clear();
        cards.AddRange(obj);

        StartCoroutine(ShuffleToBestCards());
    }
    private Handd hand1 = new();

    private Handd Besthand1 = new();
    private Handd Besthand2 = new();
    private Handd Besthand3 = new();

    IEnumerator  ShuffleToBestCards()
    {
        for (int i = 0; i < shuffleLimit; i++)
            hand1.Add(cards[i]);
        
        Besthand1 = CombinationСalculator.GetBestHanddEfficiently(hand1);

        yield return new WaitForSeconds(.3f);

        foreach (var t in Besthand1._Handd)
            hand1.Remove(t);
        
        Besthand2 = CombinationСalculator.GetBestHanddEfficiently(hand1);

        yield return new WaitForSeconds(.3f);
        
        foreach (var t in Besthand2._Handd)
            hand1.Remove(t);
        
        Besthand3 = CombinationСalculator.GetBestHanddEfficiently(hand1);
        
        yield return new WaitForSeconds(.3f);
            
        foreach (var t in Besthand3._Handd)
            hand1.Remove(t);

        List<CardData> shuffledCards = new();
        
        yield return new WaitForSeconds(.3f);
        
        shuffledCards.AddRange(Besthand1._Handd);
        shuffledCards.AddRange(Besthand2._Handd);
        
        yield return new WaitForSeconds(.1f);
        shuffledCards.AddRange(Besthand3._Handd);
        shuffledCards.AddRange(hand1._Handd);

        cards.Clear();
        cards = shuffledCards;
        
        print($"Bot Cards Shuffled {cards.Count}");

    }

    public List<CardData> GetCards()
    {
        return cards;
    }
    
}
