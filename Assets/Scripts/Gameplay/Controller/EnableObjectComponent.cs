using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableObjectComponent : MonoBehaviour
{
    [SerializeField] private List<GameObject> m_ContainerObjects;

    public void SetContainerActiveState(bool status)
    {
        gameObject.SetActive(status);
    }
    
    public void EnableAtIndex(int index)
    {
        m_ContainerObjects[index].SetActive(true);
    }
}
