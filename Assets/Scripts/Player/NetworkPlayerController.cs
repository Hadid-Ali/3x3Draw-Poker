using Photon.Pun;
using UnityEngine;

[RequireComponent(typeof(PhotonView))]
public class NetworkPlayerController : PlayerController
{
    [SerializeField] private PhotonView m_PhotonView;

    public bool IsLocalPlayer => m_PhotonView != null && m_PhotonView.IsMine;
    public override int ID => m_PhotonView.ViewID;

    public PhotonView NetworkView => m_PhotonView;

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

    private void OnSubmitDeck()
    {
        GameEvents.GameplayEvents.NetworkSubmitRequest.Raise(
            new NetworkDataObject(GameCardsData.Instance.GetDecksData(), ID));
    }
}
