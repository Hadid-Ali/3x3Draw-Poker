using System.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

[Serializable]
public class CombinationСalculator : MonoBehaviour
{
    [SerializeField] private List<Image> imageC; 
    [SerializeField] private List<Image> imageT; 
    
    [SerializeField] private List<CardData> cards;
    [SerializeField] private List<CardData> cardsShuffled;

    [ContextMenu("Test Cards")]
    private void TestCards()
    {
        
        for (int i = 0; i < cards.Count; i++)
        {
            int randomVal = Random.Range(0, 13);
            cards[i].value = (CardValue)randomVal;
            int randomType = Random.Range(0, 4);
            cards[i].type = (CardType)randomType;
            
            imageC[i].sprite = CardsRegistery.Instance.GetCardSprite(cards[i].type, cards[i].value);
        }
        cardsShuffled = CollectBestHands(3).SelectMany(hand => hand).ToList();

       // for (var v in cardsShuffled)
        //{
          //  imageT[]
        //}
        print(cards.Count);
        
    }


    public List<List<CardData>> CollectBestHands(int numberOfHands)
    {
        List<List<CardData>> bestHands = new List<List<CardData>>();
        
        List<List<CardData>> combinations = GetCombinations(cards, 5);
        
        foreach (var combination in combinations)
        {
            HandTypes handss = HandTypes.HighCard;
            List<CardData> bestHand = GetBestHand(combination);
            bestHands.Add(bestHand);
        }
        
        return bestHands.Take(numberOfHands).ToList();
    }
    
    private List<List<CardData>> GetCombinations(List<CardData> cards, int size)
    {
        List<List<CardData>> combinations = new List<List<CardData>>();
        GetCombinationsRecursive(cards, size, new List<CardData>(), combinations);
        return combinations;
    }
    
    private void GetCombinationsRecursive(List<CardData> cards, int size, List<CardData> currentCombination, List<List<CardData>> combinations)
    {
        if (size == 0)
        {
            combinations.Add(new List<CardData>(currentCombination));
            return;
        }

        for (int i = 0; i <= cards.Count - size; i++)
        {
            currentCombination.Add(cards[i]);
            GetCombinationsRecursive(cards.Skip(i + 1).ToList(), size - 1, currentCombination, combinations);
            currentCombination.Remove(cards[i]);
        }
    }
    
    private List<CardData> GetBestHand(List<CardData> hand)
    {
        return hand.OrderByDescending(card => (int)card.value).ToList();
    }
    

    
}