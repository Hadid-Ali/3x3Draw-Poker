using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;

public class NetworkMatchManager : MonoBehaviour
{
    [SerializeField] private NetworkCardsDealer m_CardsDealer;

    public void OnPlayerSpawnedInMatch(PlayerController playerController)
    {
        if (!PhotonNetwork.IsMasterClient)
            return;

        if (playerController.IsLocalPlayer)
        {
            m_CardsDealer.DealCardsToLocalPlayer();
        }
        else
        {
            m_CardsDealer.DealCardsToNetworkPlayer(playerController);
        }
    }

    public void RestartMatch()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
