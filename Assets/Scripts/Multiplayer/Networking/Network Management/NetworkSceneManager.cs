using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NetworkSceneManager : MonoBehaviour
{
    [SerializeField] private PhotonView m_PhotonView;

    public void LoadGameplayScene(float wait)
    {
        NetworkManager.NetworkUtilities.RaiseRPC(m_PhotonView, nameof(LoadGameplaySceneRPC), RpcTarget.All,
            new object[] { wait });
    }
    
    [PunRPC]
    private void LoadGameplaySceneRPC(float wait)
    {
        NetworkManager.Instance.SetStatus("Loading Game...");
        StartCoroutine(LoadScene("PokerGame", wait));
    }

    private IEnumerator LoadScene(string sceneName,float wait)
    {
        Debug.LogError("Load Scene");
        yield return new WaitForSeconds(wait);
        SceneManager.LoadScene(sceneName);
    }
}
