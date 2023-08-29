using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraResolutionAdjuster : MonoBehaviour
{
    [SerializeField] private CameraResolutionConfig[] m_CameraConfigs;

    void AdjustResolution()
    {
        float screenRatio = (float)Screen.width / Screen.height;
        float resolutionToUse = m_CameraConfigs[0].OrthographicSize;

        for (int i = 0; i < m_CameraConfigs.Length; i++)
        {
            
        }
    }
}
