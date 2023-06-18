using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class HandsEvaluator : MonoBehaviour
{
    [SerializeField] private int m_DecksCount = 3;
    [SerializeField] private int m_DeckSize = 5;

    public void OnAllNetworkDecksReceived(List<NetworkDataObject> networkDataObjects)
    {
        Dictionary<int, CardData[,]> structuredData = new();

        for (int i = 0; i < networkDataObjects.Count; i++)
        {
            NetworkDataObject dataObject = networkDataObjects[i];

            int currentPhotonID = dataObject.PhotonViewID;
            CardData[,] cardsData = new CardData[m_DecksCount, m_DeckSize];

            int min = 0;
            int max = m_DeckSize;

            for (int j = 0; j < m_DecksCount; j++)
            {
                int x = 0;

                for (int k = min; k < max; k++)
                {
                    cardsData[j, x++] = dataObject.PlayerDecks[k];
                }

                if (max >= dataObject.PlayerDecks.Count)
                    break;

                min += m_DeckSize;
                max += m_DeckSize;
            }

            structuredData[currentPhotonID] = cardsData;
        }

        OnNetworkDataReceivedInternal(structuredData);
    }

    private void OnNetworkDataReceivedInternal(Dictionary<int, CardData[,]> cardsData)
    {
        Dictionary<int, int> userScores = new();

        for (int i = 0; i < m_DecksCount; i++)
        {
            foreach (KeyValuePair<int, CardData[,]> kvp in cardsData)
            {
                CardData[,] data = kvp.Value;

                CardData[] deck = new CardData[m_DeckSize];

                for (int j = 0; j < m_DeckSize; j++)
                {
                }
            }
        }
    }
    
}
