using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResultUIHandler : MonoBehaviour
{
    [SerializeField] private ResultHand[] m_ResultHands;
    [SerializeField] private GameObject m_Container;

    public void SetActiveState(bool status)
    {
        m_Container.SetActive(status);
        
    }
}
