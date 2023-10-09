using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class RandomizeObjectController : MonoBehaviour
{
    [SerializeField] private List<GameObject> m_RandomObjects;

    private void Start()
    {
        EnableRandomObject();
    }

    private void EnableRandomObject()
    {
        m_RandomObjects[Random.Range(0,m_RandomObjects.Count)].SetActive(true);
    }
}
