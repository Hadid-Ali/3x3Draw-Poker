using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RoomSetupScreen : MainMenuBase
{
   [SerializeField] private TMP_InputField m_RoomsizeField;
   [SerializeField] private Button m_CreateRoomButton;

   [SerializeField] private PhotonRoomCreationEvent m_RoomCreationEvent;

   private int m_Roomsize = 2;

   private void Start()
   {
      m_CreateRoomButton.onClick.AddListener(CreateRoom);
      m_RoomsizeField.onValueChanged.AddListener(OnRoomSizeValueChanged);

      OnRoomSizeValueChanged("2");
   }

   private void CreateRoom()
   {
      m_RoomCreationEvent.Raise(new RoomOptions()
      {
         MaxPlayers = (byte)m_Roomsize,
         IsOpen = true,
         IsVisible = true
      });
      GameData.SessionData.CurrentRoomPlayersCount = m_Roomsize;
      ChangeMenuState(MenuName.ConnectionScreen);
   }

   private void OnRoomSizeValueChanged(string text)
   {
      if (int.TryParse(text,out m_Roomsize))
      {
         if (m_Roomsize > 1)
         {
            m_CreateRoomButton.interactable = true;
            return;
         }
      }
      m_CreateRoomButton.interactable = false;
   }
}
