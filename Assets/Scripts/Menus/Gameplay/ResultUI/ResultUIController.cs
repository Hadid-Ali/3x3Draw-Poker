using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using Unity.VisualScripting;
using UnityEngine;

public class ResultUIController : MonoBehaviour
{
    [Header("Refs")]
    
    [SerializeField] private ResultUIView m_ResultUiView;
    
    [Header("Attributes")]
    
    [SerializeField] private float m_WaitBeforeWinnerReveal;
    [SerializeField] private float m_WaitBetweenDecksReveal;
    
    private List<PlayerScoreObject> m_UsersScoreList = new();
    private List<PlayerDecksObject> m_PlayerDecks = new();
    
    private GameEvent m_OnResultViewClose = new();
    

    private void OnEnable()
    {
        GameEvents.NetworkGameplayEvents.PlayerScoresReceived.Register(OnPlayerScoresReceived);
    }

    private void OnDisable()
    {
        GameEvents.NetworkGameplayEvents.PlayerScoresReceived.UnRegister(OnPlayerScoresReceived);
    }

    public void Initialize(Action onMenuClose)
    {
        m_OnResultViewClose.Register(onMenuClose);
    }
        
    private void OnPlayerScoresReceived(List<NetworkDataObject> playerNetworkDataObjects,
        List<PlayerScoreObject> playerScoreObjects)
    {
        m_UsersScoreList = playerScoreObjects;
        InitializePlayerDecks(playerNetworkDataObjects);
        
        SetupShowResultUI();
    }

    private void InitializePlayerDecks(List<NetworkDataObject> playerNetworkDataObjects)
    {
        m_PlayerDecks.Clear();
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
    
    private void SetupShowResultUI()
    {
        StartCoroutine(ShowResultantUI_Routine());
    }

    private IEnumerator ShowResultantUI_Routine()
    {
        int index = 0;
        int totalHands = GameData.MetaData.DecksCount;
        
        GameEvents.GameplayEvents.GameplayStateSwitched.Raise(GameplayState.Result_Deck_View);
        
        while (index < totalHands)
        {
            ShowDecksAtIndex(index++);
            
           // var waitTime = GameData.SessionData.CurrentRoomPlayersCount >= 4 ? 
              //  m_WaitBetweenDecksReveal * 2 : m_WaitBetweenDecksReveal;
            
            //Debug.Log(waitTime);
            yield return new WaitForSeconds(5);
        }

        m_ResultUiView.Reset();
        m_ResultUiView.SetActiveState(false);
        m_OnResultViewClose.Raise();
        
        yield return new WaitForSeconds(.5f);
        
        GameEvents.GameplayEvents.GameplayStateSwitched.Raise(GameplayState.Result_Score_View);
    }

    private void ShowDecksAtIndex(int index)
    {
        ResultHandDataObject[] resultObjects = new ResultHandDataObject[m_PlayerDecks.Count];
        
        for (int i = 0; i < m_PlayerDecks.Count; i++)
        {
            PlayerDecksObject deckObject = m_PlayerDecks[i];
            CardData [] cardData = deckObject.Decks[index];
            
            HandEvaluator.Evaluate(cardData, out HandTypes handTypes);

            List<CardData> cardList = cardData.ToList();

            if (handTypes is HandTypes.Straight or HandTypes.StraightFlush) //Exception for Straight n StraightFlush
            {
                foreach (var c in cardData)
                {
                    if (c.value == Cardvalue.value_A )
                        c.value = Cardvalue.valueS_A; //Change value to custom lowest so A is at the end
                }
            }

            if (handTypes is HandTypes.FullHouse)//Exception for fullhouse
            {
                var groupedByValue = cardList.GroupBy(card => card.value)
                    .ToDictionary(g => g.Key, g => g.ToList());

                List<CardData> threeOfAKind = null;
                List<CardData> pair = null;

                // Check for three of a kind and pair
                foreach (var group in groupedByValue.Values)
                {
                    switch (group.Count)
                    {
                        case 3:
                            threeOfAKind = group;
                            break;
                        case 2:
                            pair = group;
                            break;
                    }
                }

                if (threeOfAKind != null && pair != null)
                {
                    cardList = threeOfAKind.Concat(pair).ToList(); //Concatenating with pair so threeOfAKind comes before pair 
                    cardData = cardList.ToArray(); 
                }
            }
            else //Order the final list by Descending
            {
                var descOrdered = cardList.OrderByDescending(x => x.value);
                cardData = descOrdered.ToArray();
            }
            
            

            resultObjects[i] = new ResultHandDataObject()
            {
                CardBack = CardsRegistery.Instance.GetCardSprite((ItemName)m_UsersScoreList[i].SelectedCard),
                Cards = GetCardSprites(cardData),
                Score = GameData.MetaData.HandWinReward,
                PlayerName = Dependencies.PlayersContainer.GetPlayerName(deckObject.userID),
                IsWinner = IsHandIndexWinner(deckObject.userID, index),
                WinnerRevealDuration = m_WaitBeforeWinnerReveal,
                HandName = DeckHandsRegistry.Instance.GetHandTypeName(handTypes)
            };
        }

        m_ResultUiView.SetResultData(resultObjects, index);
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
