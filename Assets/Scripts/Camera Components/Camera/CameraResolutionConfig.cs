using System;
using UnityEngine;

[Serializable]
public class CameraResolutionConfig
{
    [field: SerializeField] public float ResolutionThreshold { get; set; }
    [field: SerializeField] public float OrthographicSize { get; set; }
}
