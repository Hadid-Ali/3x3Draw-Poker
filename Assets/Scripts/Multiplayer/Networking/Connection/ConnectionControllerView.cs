using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using UnityAtoms.BaseAtoms;
using UnityEngine;

public class ConnectionControllerView : MonoBehaviour
{
    [SerializeField] private ConnectionController m_ConnectionController;
    
    [SerializeField] private StringEvent m_PlayerLoginEvent;
    [SerializeField] private PhotonRegionEvent m_PlayerRegionSelectEvent;
    [SerializeField] private PhotonRoomCreationEvent m_RoomcreationEvent;

    private void OnEnable()
    {
        m_PlayerLoginEvent.Register(OnLogin);
        m_PlayerRegionSelectEvent.Register(OnRegionSelection);
        m_RoomcreationEvent.Register(OnCreateRoom);
    }

    private void OnDisable()
    {
        m_PlayerLoginEvent.Unregister(OnLogin);
        m_PlayerRegionSelectEvent.Unregister(OnRegionSelection);
        m_RoomcreationEvent.Unregister(OnCreateRoom);
    }

    private void OnLogin(string userName)
    {
        m_ConnectionController.StartConnectionWithName(userName);
    }

    private void OnRegionSelection(Region region)
    {
        m_ConnectionController.OnRegionSelect(region);
    }

    private void OnCreateRoom(RoomOptions roomOptions)
    {
        m_ConnectionController.CreateRoom(roomOptions);
    }
}
