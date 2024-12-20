using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverMenu : UIMenuBase
{
   [SerializeField] private ButtonWidget m_GoToMenuButton;

   private void Start()
   {
      m_GoToMenuButton.SubscribeAction(OnGoToMenuClick);
      GameEvents.NetworkPlayerEvents.OnMasterLeftRoom.Register(OnMasterLeftRoom);
   }

   private void OnMasterLeftRoom()
   {
      GameEvents.MenuEvents.MenuTransitionEvent.Raise(MenuName.GameDead);
      print("Master left room received");
   }

   private void OnDestroy()
   {
      GameEvents.NetworkPlayerEvents.OnMasterLeftRoom.UnRegister(OnMasterLeftRoom);
   }

   //TODO: Implement Scene Flow Controller
   private void OnGoToMenuClick()
   {
      GameEvents.GameFlowEvents.LeaveMatch.Raise();
      SceneManager.LoadScene("GameMenu");
   }
}
