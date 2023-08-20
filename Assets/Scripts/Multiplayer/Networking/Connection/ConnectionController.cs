using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using Photon.Realtime;
using UnityAtoms.BaseAtoms;
using UnityEngine;



public class ConnectionController : MonoBehaviourPunCallbacks
{
    [SerializeField] private int m_PlayersCount = 2;
    
    [SerializeField] private ConnectionTransitionEvent m_OnServerConnected;
    [SerializeField] private VoidEvent m_OnRoomJoinFailed;

    private RegionHandler m_RegionHandler;
    
    private int m_RequiredPlayersCount = 2;
    private bool m_IsTestConnection = true;
    
    private void UpdateConnectionStatus(string status)
    {
        NetworkManager.Instance.SetStatus(status);
    }
    
    private void OnDestroy()
    {
        PhotonNetwork.Disconnect();
    }

    public void StartConnectionWithName(string name)
    {
        PhotonNetwork.LocalPlayer.NickName = name;
        ConnectToServer();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);
        Debug.LogError($"{cause}");
    }

    private void ConnectToServer()
    {
        UpdateConnectionStatus("Connecting...");
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        Debug.LogError("Connected to Master");
        if (m_IsTestConnection)
        {
            UpdateConnectionStatus("Connected to Server, Finding Best Regions to Connect");
            Invoke(nameof(OnRegionsPingCompleted), 1f);
        }
        else
        {
            PhotonNetwork.JoinLobby();
        }
    }

    public override void OnRegionListReceived(RegionHandler regionHandler)
    {
        m_RegionHandler = regionHandler;
    }

    private void OnRegionsPingCompleted()
    {
        List<Region> regions = m_RegionHandler.EnabledRegions;
        m_OnServerConnected.Raise(new RegionConfig()
        {
            Availableregions = regions,
            BestRegion = m_RegionHandler.BestRegion
        });
    }

    public void OnRegionSelect(Region region)
    {
        PhotonNetwork.Disconnect();
        m_IsTestConnection = false;
        string regionCode = region.Code;
        PhotonNetwork.ConnectToRegion(regionCode);
        
        UpdateConnectionStatus(
            $"Connected To {NetworkManager.Instance.RegionsRegistry.GetRegionName(regionCode)}, Finding Lobby");
    }

    public void CreateRoom(RoomOptions roomOptions)
    {
        m_RequiredPlayersCount = roomOptions.MaxPlayers;
        PhotonNetwork.JoinOrCreateRoom("Game", roomOptions, TypedLobby.Default);
        UpdateConnectionStatus("Setting Up Room");
    }
    
    public override void OnJoinedLobby()
    {
        UpdateConnectionStatus("Joined Lobby, Finding Match");
        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        base.OnJoinRandomFailed(returnCode, message);
        m_OnRoomJoinFailed.Raise();
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        UpdateConnectionStatus($"Match Found,Waiting For Others");
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
        if (PhotonNetwork.PlayerList.Length >= m_RequiredPlayersCount && PhotonNetwork.IsMasterClient)
        {
            NetworkManager.Instance.LoadGameplay();
            PhotonNetwork.CurrentRoom.IsOpen = false;
        }
    }
}
