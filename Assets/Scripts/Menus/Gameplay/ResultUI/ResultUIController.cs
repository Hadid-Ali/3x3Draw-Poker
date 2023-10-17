using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ResultUIController : MonoBehaviour
{
    [SerializeField] private ResultUIView m_ResultUiView;

    private List<PlayerScoreObject> m_UsersScoreList = new();
    private List<PlayerDecksObject> m_PlayerDecks = new();

    private void OnEnable()
    {
        GameEvents.NetworkGameplayEvents.OnPlayerScoresReceived.Register(OnPlayerScoresReceived);
    }

    private void OnDisable()
    {
        GameEvents.NetworkGameplayEvents.OnPlayerScoresReceived.UnRegister(OnPlayerScoresReceived);
    }

    void OnPlayerScoresReceived(List<NetworkDataObject> playerNetworkDataObjects,
        List<PlayerScoreObject> playerScoreObjects)
    {
        m_UsersScoreList = playerScoreObjects;
        InitializePlayerDecks(playerNetworkDataObjects);
        SetuphowResultUI();
    }

    private void InitializePlayerDecks(List<NetworkDataObject> playerNetworkDataObjects)
    {
        for (int i = 0; i < playerNetworkDataObjects.Count; i++)
        {
            NetworkDataObject obj = playerNetworkDataObjects[i];

            m_PlayerDecks.Add(new PlayerDecksObject()
            {
                userID = obj.PhotonViewID,
                Decks = obj.GetDeck()
            });
        }
    }
    
    private void SetuphowResultUI()
    {
        ShowDecksAtIndex(0);
        GameEvents.GameplayEvents.GameplayStateSwitched.Raise(GameplayState.Result_Deck_View);
    }

    private void ShowDecksAtIndex(int index)
    {
        ResultHandDataObject[] resultObjects = new ResultHandDataObject[m_PlayerDecks.Count];
        
        for (int i = 0; i < m_PlayerDecks.Count; i++)
        {
            PlayerDecksObject deckObject = m_PlayerDecks[i];
            
            CardData [] cardData = deckObject.Decks[index];

            resultObjects[i] = new ResultHandDataObject()
            {
                Cards = GetCardSprites(cardData),
                Score = UserScore(deckObject.userID),
                PlayerName = "User",
                IsWinner = IsHandIndexWinner(deckObject.userID, index)
            };
        }
        
        m_ResultUiView.SetResultData(resultObjects);
    }

    private Sprite[] GetCardSprites(CardData[] cardData)
    {
        Sprite[] sprites = new Sprite[cardData.Length];

        for (int i = 0; i < cardData.Length; i++)
        {
            sprites[i] = CardsRegistery.Instance.GetCardSprite(cardData[i].type, cardData[i].value);
        }

        return sprites;
    }

    private int UserScore(int userID) => m_UsersScoreList.Find(user => user.UserID == userID).Score;

    private bool IsHandIndexWinner(int userID,int handIndex)
    {
        PlayerScoreObject scoreObject = m_UsersScoreList.Find(user => user.UserID == userID);

        if (!scoreObject.WinningHandsIndexes.Any())
            return false;

        return scoreObject.WinningHandsIndexes.Contains(handIndex);
    }
}
