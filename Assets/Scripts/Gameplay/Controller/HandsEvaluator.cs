using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class HandsEvaluator : MonoBehaviour
{
    public void OnAllNetworkDecksReceived(List<NetworkDataObject> networkDataObjects)
    {
        Dictionary<int, int> scoreWon = new Dictionary<int, int>();
        
        for (int i = 0; i < 3; i++)
        {
            Dictionary<int, HandType> deckContainer = new();

            foreach (var dataObject in networkDataObjects)
            {
                HandEvaluator.Evaluate(dataObject.PlayerDecks[i], out HandType type);
                deckContainer[dataObject.PhotonViewID] = type;
            }

            var keyValuePairs = deckContainer.OrderBy(key => key.Value);
            scoreWon[keyValuePairs.First().Key] += 100;
        }

        foreach (KeyValuePair<int, int> score in scoreWon)
        {
            Debug.LogError($"{score.Key} got {score.Value}");
        }
    }
}
