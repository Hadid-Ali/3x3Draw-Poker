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

   [SerializeField] private NameLabelComponent _prefabToSpawn;
   [SerializeField] private Transform _nameLabelsContainer;
    
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

   private void DeleteAll()
   {
      Transform[] children = _nameLabelsContainer.GetComponentsInChildren<Transform>();

      for (int i = 1; i < children.Length; i++)
      {
         Debug.LogError(children[i].gameObject);
         Destroy(children[i].gameObject);
      }
   }

   private void CreatePlayersList(List<string> playersList)
   {
      DeleteAll();
      for (int i = 0; i < playersList.Count; i++)
      {
         NameLabelComponent component = Instantiate(_prefabToSpawn, _nameLabelsContainer);
         component.SetName(playersList[i]);
      }
   }
    
   private void UpdatePlayerList(List<string> Players)
   {
      print($"Function working");
      CreatePlayersList(Players);

      string PlayerPlural = Players.Count > 1 ? "Players Have" : "Player Has";
      this.players.text = $"{Players.Count} {PlayerPlural} Joined";
      GameData.SessionData.CurrentRoomPlayersCount = Players.Count;
   }
   
}

