using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RoundCompleteMenu : MonoBehaviour
{
    [Header("Refs")]
    [SerializeField] private GameObject m_Container;

    [Header("Components")] 
    [SerializeField] private TMP_Text m_RewardText;
    
    private void OnEnable()
    {
        GameEvents.GameplayUIEvents.PlayerRewardReceived.Register(OnPlayerRewardReceived);
    }

    private void OnDisable()
    {
        GameEvents.GameplayUIEvents.PlayerRewardReceived.Unregister(OnPlayerRewardReceived);
    }
    
    private void OnPlayerRewardReceived(int reward)
    {
        m_Container.SetActive(true);
        m_RewardText.text = reward > 0 ? $"You Received {reward} Score" : "You Didn't Win through any Hand";
    }
}
