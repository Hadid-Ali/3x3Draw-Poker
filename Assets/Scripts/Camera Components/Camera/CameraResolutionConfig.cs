using System;
using UnityEngine;

[Serializable]
public class CameraResolutionConfig
{
    [field: SerializeField] public float ResolutionThreshold { get; private set; }
    [field: SerializeField] public GameObject CamerasContainer { get; private set; }
}
