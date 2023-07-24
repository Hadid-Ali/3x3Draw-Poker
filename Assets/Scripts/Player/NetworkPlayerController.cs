using System;
using Photon.Pun;
using UnityEngine;

[RequireComponent(typeof(PhotonView))]
public class NetworkPlayerController : PlayerController
{
    [SerializeField] private PhotonView m_PhotonView;

    public override  bool IsLocalPlayer => m_PhotonView != null && m_PhotonView.IsMine;
    public override int ID => m_PhotonView.ViewID;

    public PhotonView NetworkView => m_PhotonView;

    private int m_TotalScore = 0;
    private int m_CurrentAchievedScore = 0;

    public override string Name
    {
        set => m_Name = value;
        get => IsLocalPlayer ? PhotonNetwork.NickName : m_Name;
    }
    
    protected override void Start()
    {
        base.Start();
        OnSpawn();
    }

    public void OnSpawn()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            NetworkGameplayManager.Instance.OnGameplayJoined(this);
        }
        
        if (!IsLocalPlayer)
            return;
        
        InitializeControls();  
    }

    void InitializeControls()
    {
        GameEvents.GameplayUIEvents.SubmitDecks.Register(OnSubmitDeck);
    }

    private void OnDisable()
    {
        GameEvents.GameplayUIEvents.SubmitDecks.Unregister(OnSubmitDeck);
    }

    private void OnSubmitDeck()
    {
        GameEvents.GameplayEvents.NetworkSubmitRequest.Raise(
            new NetworkDataObject(GameCardsData.Instance.GetDecksData(), ID));
    }

    public override void AwardPlayerPoints(int reward)
    {
        NetworkManager.NetworkUtilities.RaiseRPC(m_PhotonView, nameof(AwardPlayerPoints_RPC), RpcTarget.All,
            new object[] { reward });
    }

    [PunRPC]
    public void AwardPlayerPoints_RPC(int reward)
    {
        Debug.LogError("Award Points");
        if (!IsLocalPlayer)
            return;
        
        m_TotalScore += reward;
        m_CurrentAchievedScore = reward;
        
        GameEvents.GameplayUIEvents.PlayerRewardReceived.Raise(reward);
    }
    
    public override void SubmitCardData(string data)
    {
        NetworkManager.NetworkUtilities.RaiseRPC(m_PhotonView, nameof(ReceiveHandFromNetwork), RpcTarget.All,
            new object[] { data });
    }

    [PunRPC]
    public void ReceiveHandFromNetwork(string data)
    {
        if (!m_PhotonView.IsMine)
            return;

        GameEvents.NetworkEvents.PlayerReceiveCardsData.Raise(data);
    }
}
