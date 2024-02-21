using System;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Random = UnityEngine.Random;

[RequireComponent(typeof(PhotonView))]
public class NetworkPlayerController : PlayerController
{
    [SerializeField] private PhotonView m_PhotonView;

    public override  bool IsLocalPlayer => m_PhotonView != null && m_PhotonView.IsMine;
    public override int ID => m_PhotonView.ViewID;
    public PhotonView NetworkView => m_PhotonView;


    protected override void Start()
    {
        base.Start();
        OnSpawn(IsBot);
    }

    public void OnSpawn(bool isBot)
    {
        PhotonNetwork.RegisterPhotonView(m_PhotonView);
        GameEvents.NetworkEvents.NetworkDisconnectedEvent.Register(OnNetworkDisconnect);
        
        //Assign ID before Event
        ID = isBot? GameData.SessionData.CurrentRoomPlayersCount :  m_PhotonView.ViewID;
        GameEvents.NetworkGameplayEvents.PlayerJoinedGame.Raise(this);
        
        if (!IsLocalPlayer)
            return;
        
        InitializeControls();
        SetPlayerDataOverServer();    
        
    }

    private void OnNetworkDisconnect()
    {
      //  Destroy(gameObject);
    }

    private void SetPlayerDataOverServer()
    {
        Player player = PhotonNetwork.LocalPlayer;
        Debug.LogError($"Player ID {player.ActorNumber}");

        int _botId = GameData.SessionData.CurrentRoomPlayersCount;

        int _id = IsBot ? _botId : player.ActorNumber;
        string nickName = IsBot ? $"Bot {_botId}" : player.NickName;
        
        NetworkManager.NetworkUtilities.RaiseRPC(m_PhotonView, nameof(SetPlayerData_RPC), RpcTarget.All,
            new object[] { nickName, _id ,Random.Range(0,8)});
    }


    void InitializeControls()
    {
        GameEvents.GameplayUIEvents.SubmitDecks.Register(OnSubmitDeck);
    }

    private void OnDisable()
    {
        GameEvents.NetworkEvents.NetworkDisconnectedEvent.UnRegister(OnNetworkDisconnect);
        GameEvents.GameplayUIEvents.SubmitDecks.UnRegister(OnSubmitDeck);
    }

    private void OnSubmitDeck()
    {
        GameEvents.NetworkGameplayEvents.NetworkSubmitRequest.Raise(
            IsBot
                ? new NetworkDataObject(NetworkBotCardsHandler.GetCards(), ID) //For Bot
                : new NetworkDataObject(GameCardsData.Instance.GetDecksData(), ID)); //For Players
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
        
        if (!IsLocalPlayer || IsBot)
            return;
        
        print($"{Name} : {reward} RPC");
        GameEvents.GameplayUIEvents.PlayerRewardReceived.Raise(reward);
    }
    
    public override void SubmitCardData(string data)
    {
        NetworkManager.NetworkUtilities.RaiseRPC(m_PhotonView, nameof(ReceiveHandFromNetwork), RpcTarget.All, 
            new object[] { data, ID });
    }

    [PunRPC]
    public void ReceiveHandFromNetwork(string data, int _ID)
    {
        if (!m_PhotonView.IsMine)
            return;

        GameEvents.NetworkEvents.PlayerReceiveCardsData.Raise(data, _ID);
    }

    [PunRPC]
    public void SetPlayerData_RPC(string nameToSet,int localID,int avatarID)
    {
        Name = nameToSet;
        LocalID = localID;
        CharacterAvatarID = avatarID;
        
        OnPlayerDataSet();
    }

    private void OnPlayerDataSet()
    {
        GameEvents.GameplayEvents.LocalPlayerJoined.Raise(new PlayerViewDataObject()
        {
            Name = Name,
            LocalID = LocalID,
            AvatarID = CharacterAvatarID
        });        
    }
}
