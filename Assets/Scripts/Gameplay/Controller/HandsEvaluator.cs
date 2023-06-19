using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class HandsEvaluator : MonoBehaviour
{
    private void OnEnable()
    {
        GameEvents.GameplayEvents.AllUserHandsReceived.Register(OnAllUserHandsReceived);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.AllUserHandsReceived.Unregister(OnAllUserHandsReceived);
    }

    public void OnAllUserHandsReceived(List<NetworkDataObject> networkDataObjects)
    {
        Dictionary<int, CardData[,]> structuredData = new();

        int deckSize = GameData.MetaData.DeckSize;
        int deckCount = GameData.MetaData.DecksCount;
        
        for (int i = 0; i < networkDataObjects.Count; i++)
        {
            NetworkDataObject dataObject = networkDataObjects[i];

            int currentPhotonID = dataObject.PhotonViewID;
            CardData[,] cardsData = new CardData[deckCount, deckSize];

            int min = 0;
            int max = deckSize;

            for (int j = 0; j < deckCount; j++)
            {
                int x = 0;

                for (int k = min; k < max; k++)
                {
                    cardsData[j, x++] = dataObject.PlayerDecks[k];
                }

                if (max >= dataObject.PlayerDecks.Count)
                    break;

                min += deckSize;
                max += deckSize;
            }

            structuredData[currentPhotonID] = cardsData;
        }

        OnNetworkDataReceivedInternal(structuredData);
    }
    
    private void OnNetworkDataReceivedInternal(Dictionary<int, CardData[,]> cardsData)
    {
        int deckSize = GameData.MetaData.DeckSize;
        int deckCount = GameData.MetaData.DecksCount;
        
        Dictionary<int, int> userScores = new();


        foreach (KeyValuePair<int, CardData[,]> kvp in cardsData)
        {
            userScores[kvp.Key] = 0;
        }
        
        for (int i = 0; i < deckCount; i++)
        {
            Dictionary<int, CardData[]> currentHand = new();
            foreach (KeyValuePair<int, CardData[,]> kvp in cardsData)
            {
                int photonID = kvp.Key;
                CardData[,] cards = kvp.Value;

                CardData[] deck = new CardData[deckSize];

                for (int j = 0; j < deckSize; j++)
                {
                    deck[j] = cards[i, j];  
                }

                currentHand[photonID] = deck;
            }

            CompareHand(currentHand,out int winner);
            userScores[winner] +=  GameData.MetaData.HandWinReward;
        }
        GameEvents.GameplayEvents.UserHandsEvaluated.Raise(userScores);
    }

    private void CompareHand(Dictionary<int, CardData[]> handsData,out int Winner)
    {
        Dictionary<int, HandType> userHands = new();

        foreach (KeyValuePair<int, CardData[]> kvp in handsData)
        {
            int photonID = kvp.Key;
            CardData[] cards = kvp.Value;
            
            HandEvaluator.Evaluate(cards, out HandType handType);
            userHands[photonID] = handType;
        }

        var sortedHands = userHands.OrderBy(x => (int)x.Value).ToDictionary(x => x.Key, x => x.Value);

        List<KeyValuePair<int, HandType>> userHandsList = sortedHands.ToList();
        Winner = userHandsList[0].Key;
    }
}
