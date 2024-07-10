using System;
using System.Collections.Generic;
using Photon.Pun;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class InsideRoom : UIMenuBase
{
   [SerializeField] private TextMeshProUGUI players;
   [SerializeField] private TextMeshProUGUI MatchRemainingTimer;
    
   private void OnEnable()
   {
      GameEvents.NetworkEvents.MatchStartTimer.Register(OnMatchTimerUpdated);
      GameEvents.MenuEvents.PlayersListUpdated.Register(UpdatePlayerList);
   }

   private void OnDisable()
   {
      GameEvents.MenuEvents.PlayersListUpdated.UnRegister(UpdatePlayerList);
      GameEvents.NetworkEvents.MatchStartTimer.UnRegister(OnMatchTimerUpdated);
   }

   private void OnMatchTimerUpdated(string obj)
   {
      MatchRemainingTimer.SetText($"Match Starting in {obj}");  
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
      
      GameData.SessionData.CurrentRoomPlayersCount = Players.Count;
   }
   
}

