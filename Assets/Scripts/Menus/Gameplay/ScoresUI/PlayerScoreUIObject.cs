using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerScoreUIObject : MonoBehaviour
{
    [Header("Components")]
    
    [SerializeField] private GameObject m_WinnerIcon;
    
    [SerializeField] private TextMeshProUGUI m_NameText;
    [SerializeField] private TextMeshProUGUI m_ScoreText;

    [Header("Attributes")]
    
    [SerializeField] private int m_PositionIndex;

    public int PositionIndex => m_PositionIndex;

    private void OnEnable()
    {
        GameEvents.NetworkGameplayEvents.MatchWinnerAnnounced.Register(OnWinnerAnnounced);
    }

    private void OnDisable()
    {
        GameEvents.NetworkGameplayEvents.MatchWinnerAnnounced.UnRegister(OnWinnerAnnounced);
    }

    private void OnWinnerAnnounced(int winnerID, bool isWinner)
    {
        bool isWinnerPosition = Dependencies.PlayersContainer.GetPlayerLocalID(winnerID) == m_PositionIndex;
        m_WinnerIcon.SetActive(isWinnerPosition);
    }

    public void SetContainerStatus(bool activeState)
    {
        gameObject.SetActive(activeState);
    }
    
    public void SetName(string text)
    {
        m_NameText.text = text;
    }

    public void SetScore(int score)
    {
        m_ScoreText.text = $"{score.ToString()} pts";
    }
}
