using System;
using System.Collections;
using Photon.Pun;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameplayHud : MenusController
{
    [Header("Refs")]
    
    [SerializeField] private GameObject m_ButtonsContainer;
    [SerializeField] private GameObject m_WaitingText;
    
    [Header("UI Components")]
    
    [SerializeField] private Button m_SubmitButton;
    [SerializeField] private Button m_DisconnectButton;
    [SerializeField] private TMP_Text m_TotalScore;

    [SerializeField] private GameObject m_DisconnectedLabel;
    
    private void Start()
    {
        m_SubmitButton.onClick.AddListener(SubmitCards);
        m_DisconnectButton.onClick.AddListener(Disconnect);
    }

    protected override void OnEnable()
    {
        base.OnEnable();
        GameEvents.NetworkEvents.NetworkDisconnectedEvent.Register(OnNetworkDisconnected);
        GameEvents.GameFlowEvents.RoundStart.Register(EnableSubmitButton);
    }
    
    protected override void OnDisable()
    {
        base.OnDisable();
        GameEvents.NetworkEvents.NetworkDisconnectedEvent.UnRegister(OnNetworkDisconnected);
        GameEvents.GameFlowEvents.RoundStart.UnRegister(EnableSubmitButton);
    }

    private void OnNetworkDisconnected()
    {
    //    m_DisconnectedLabel.SetActive(true);
    }

    private void Disconnect()
    {
        PhotonNetwork.Disconnect();
    }

    private void SubmitCards()
    {
        try
        {
            GameEvents.GameplayUIEvents.SubmitDecks.Raise();
            SetSubmitButtonStatus(false);
        }
        catch (Exception e)
        {
            Debug.LogError(e.StackTrace);
        }
    }

    private void EnableSubmitButton()
    {
        SetSubmitButtonStatus(true);
    }
    
    private void SetSubmitButtonStatus(bool status)
    {
        m_ButtonsContainer.SetActive(status);
        m_WaitingText.SetActive(!status);
    }
}
