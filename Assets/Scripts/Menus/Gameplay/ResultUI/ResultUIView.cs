using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResultUIView : MonoBehaviour
{
    [SerializeField] private ResultHand[] m_ResultHands;
    [SerializeField] private GameObject m_Container;

    public void SetActiveState(bool status)
    {
        m_Container.SetActive(status);
    }

    public void SetResultData(ResultHandDataObject[] resultHandDataObject)
    {
        for (int i = 0; i < resultHandDataObject.Length; i++)
        {
            m_ResultHands[i].SetDecksContainer(resultHandDataObject[i]);
        }
    }
}
