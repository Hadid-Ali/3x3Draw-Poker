using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraResolutionAdjuster : MonoBehaviour
{
    [Header("Components")]
    
    [SerializeField] private GameObject m_PhonesCamera;
    [SerializeField] private GameObject m_TabsCamera;

    [Header("Values")]
    
    [SerializeField] private float m_ResolutionThreshold = 1.5f;

    private void Start()
    {
        AdjustResolution();
    }

    void AdjustResolution()
    {
        float screenRatio = (float)Screen.width / Screen.height;

        bool isPhoneRes = screenRatio >= m_ResolutionThreshold;
        
        m_PhonesCamera.SetActive(isPhoneRes);
        m_TabsCamera.SetActive(!isPhoneRes);
    }
}
