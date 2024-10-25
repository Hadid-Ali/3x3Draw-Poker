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

    private WaitForSeconds m_WaitBetweenDecks;
    private GameEvent m_OnResultViewClose = new();

    private void Start()
    {
        m_WaitBetweenDecks = new(m_WaitBetweenDecksReveal);
    }

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
        GameEvents.GameplayEvents.GameplayStateSwitched.Raise(GameplayState.Result_Deck_View);
    }

    private IEnumerator ShowResultantUI_Routine()
    {
        int index = 0;
        int totalHands = GameData.MetaData.DecksCount;
        
        while (index < totalHands)
        {
            ShowDecksAtIndex(index++);
            float waitTime = PhotonNetwork.CountOfPlayers >= 4 ? 
                m_WaitBetweenDecksReveal : m_WaitBetweenDecksReveal * 2;
            yield return new WaitForSeconds(waitTime);
        }

        m_ResultUiView.Reset();
        m_ResultUiView.SetActiveState(false);
        m_OnResultViewClose.Raise();
        GameEvents.GameplayEvents.GameplayStateSwitched.Raise(GameplayState.Result_Score_View);
    }

    private void ShowDecksAtIndex(int index)
    {
        ResultHandDataObject[] resultObjects = new ResultHandDataObject[m_PlayerDecks.Count];
        
        for (int i = 0; i < m_PlayerDecks.Count; i++)
        {
            PlayerDecksObject deckObject = m_PlayerDecks[i];
            CardData [] cardData = deckObject.Decks[index];

            foreach (var c in cardData)
            {
                if (c.value != Cardvalue.valueS_A) continue;
                c.value = Cardvalue.value_A;
                break;
            }
            
            HandEvaluator.Evaluate(cardData, out HandTypes handTypes);

            List<CardData> cardList = cardData.ToList();
            
            //var orderByDescending = cardList.OrderByDescending(data => data.value);

            if (handTypes is HandTypes.Straight or HandTypes.StraightFlush)
            {
                var temp = cardList.Find(x => x.value == Cardvalue.value_A);
                if (temp != null)
                {
                    cardList.Remove(temp);
                    cardList.Add(temp);
                }
            }
            
            
            //cardData = orderByDescending.ToArray();

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
