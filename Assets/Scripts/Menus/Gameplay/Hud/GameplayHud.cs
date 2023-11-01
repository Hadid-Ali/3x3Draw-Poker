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
    }
    
    protected override void OnDisable()
    {
        base.OnDisable();
        GameEvents.NetworkEvents.NetworkDisconnectedEvent.Unregister(OnNetworkDisconnected);
    }

    private void OnNetworkDisconnected()
    {
        m_DisconnectedLabel.SetActive(true);
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
            m_ButtonsContainer.SetActive(false);
            m_WaitingText.SetActive(true);
        }
        catch (Exception e)
        {
            Debug.LogError(e.StackTrace);
        }
    }
}
