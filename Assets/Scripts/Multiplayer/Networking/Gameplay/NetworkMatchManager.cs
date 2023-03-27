using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkMatchManager : MonoBehaviour
{
    [SerializeField] private NetworkGameplayManager m_NetworkGameplayManager;
    [SerializeField] private List<int> m_PlayersOrder;

    public void MarkPlayerReached(int id)
    {
        int count = m_PlayersOrder.Count;
        if (count <= 0)
        {
            m_NetworkGameplayManager.MarkPlayerWinner(id);
        }
        else
        {
            m_NetworkGameplayManager.MarkPlayerLost(id, count + 1);
        }
        m_PlayersOrder.Add(id);
    }
}
