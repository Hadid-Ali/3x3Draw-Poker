using System;
using System.Collections;
using System.Collections.Generic;
using UnityAtoms.BaseAtoms;
using UnityEngine;

public class GameplayHud : MonoBehaviour
{
    [SerializeField] private GameObject m_DamageScreen;
    
    [SerializeField] private VoidEvent m_OnDamageEvent;

    private void OnEnable()
    {
        m_OnDamageEvent.Register(ShowDamageScreen);
    }

    private void OnDisable()
    {
        m_OnDamageEvent.Unregister(ShowDamageScreen);
    }

    private void ShowDamageScreen()
    {
        m_DamageScreen.SetActive(true);
    }
}
