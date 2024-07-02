using System;
using System.Collections.Generic;
using Photon.Pun;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class InsideRoom : UIMenuBase
{
   [SerializeField] private TextMeshProUGUI players;
  // [SerializeField] private TextMeshProUGUI statusText;
   [SerializeField] private Button button;
    
   private void OnEnable()
   {
      button.onClick.AddListener(()=> { GameEvents.MenuEvents.MatchStartRequested.Raise();});
      GameEvents.MenuEvents.PlayersListUpdated.Register(UpdatePlayerList);
        
      GameEvents.NetworkEvents.PlayerJoinedRoom.Register((bool b)=> button.gameObject.SetActive(b));
     // GameEvents.NetworkEvents.NetworkStatus.Register(UpdateLobbyStatus);
   }

   private void UpdateLobbyStatus(string obj)
   {
    //  statusText.SetText(obj);
   }

   private void OnDisable()
   {
      GameEvents.MenuEvents.PlayersListUpdated.UnRegister(UpdatePlayerList);
      GameEvents.NetworkEvents.PlayerJoinedRoom.UnRegister((bool b)=> button.gameObject.SetActive(b));
      //GameEvents.NetworkEvents.NetworkStatus.UnRegister(UpdateLobbyStatus);
   }

   private void OnValidate()
   {
      if(!PhotonNetwork.IsMasterClient)
         return;
        
      button.interactable = PhotonNetwork.PlayerList.Length > 1;
   }
    
   private void UpdatePlayerList(List<string> Players)
   {
      print($"Function working");
      string players = String.Empty;

      for (int i = 0; i < Players.Count; i++)
      {
         int index = i + 1;
         players += $"\n {index}. {Players[i]}";
      }

      string PlayerPlural = Players.Count > 1 ? "Players Have" : "Player Has";
      
      this.players.text = $"{Players.Count} {PlayerPlural} Joined. {players}";

      button.interactable = Players.Count > 1;
      GameData.SessionData.CurrentRoomPlayersCount = Players.Count;
        
//      statusText.gameObject.SetActive(!PhotonNetwork.IsMasterClient);
   }
   
}

