using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

public enum CameraType
{
    Orbit,
    Slope
}

[Serializable]
public struct CameraObject
{
    [SerializeField] private CameraType m_CameraType;
    [SerializeField] private CinemachineVirtualCamera m_CameraComponent;

    [SerializeField] private CameraController m_CameraController;

    public CameraType CameraType => m_CameraType;

    public void SetEnabled(bool enable)
    {
        if (m_CameraController != null)
            m_CameraController.SetEnabled(enable);
        
        m_CameraComponent.enabled = enable;
    }

    public void SetCameraTarget(Transform target)
    {
        if (m_CameraController != null)
        {
            m_CameraController.SetMainTarget(target);
        }
        else
        {
            m_CameraComponent.Follow = m_CameraComponent.LookAt = target;
        } 
    }
}

public class CameraManager : SceneBasedSingleton<CameraManager>
{
    [SerializeField] private CameraObject[] m_Cameras;

    private CameraType m_CameraType;

    private void Start()
    {
        SetCameraEnabledAtIndex(0);
    }

    public void SetMainCameraFollowTarget(Transform targetTransform)
    {
        for (int i = 0; i < m_Cameras.Length; i++)
        {
            m_Cameras[i].SetCameraTarget(targetTransform);
        }
    }

    private void SetCameraEnabledAtIndex(int index)
    {
        if (index >= m_Cameras.Length)
            return;
        
        SetCameraEnabled(m_Cameras[index].CameraType);
    }

    public void SetCameraEnabled(CameraType cameraType)
    {
        if (m_CameraType == cameraType)
            return;
        
        for (int i = 0; i < m_Cameras.Length; i++)
        {
            m_Cameras[i].SetEnabled(m_Cameras[i].CameraType == cameraType);
        }

        m_CameraType = cameraType;
    }

    public void ApplyCameraConfig(CameraConfig config)
    {
        //_MainCameraController.ApplyConfig(config);
    }
}
