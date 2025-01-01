using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class RandomizeObjectController : MonoBehaviour
{
    [SerializeField] private List<GameObject> m_RandomObjects;
    [SerializeField] private PhotonView view;

    private void Start()
    {
        if(!PhotonNetwork.IsMasterClient)
            view.RPC(nameof(OnMasterInitialized),RpcTarget.AllBuffered, Random.Range(0,m_RandomObjects.Count));
    }
    
    [PunRPC]
    private void OnMasterInitialized(int val)
    {
        m_RandomObjects[val].SetActive(true);
    }
}
