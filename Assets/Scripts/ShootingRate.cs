using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootingRate : MonoBehaviour
{
    [SerializeField] private float m_ShootingRate = 1f;

    private float m_PreviousShootingInstant; 

    // Update is called once per frame
    void Update()
    {
        if (Time.time > m_PreviousShootingInstant)
        {
            //Shoot
            m_PreviousShootingInstant = Time.time + m_ShootingRate;
        }
    }
}
