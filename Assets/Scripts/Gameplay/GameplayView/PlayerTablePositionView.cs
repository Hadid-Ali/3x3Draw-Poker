using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTablePositionView : MonoBehaviour
{
    [SerializeField] private GameObject m_CharacterAvatarContainer;

    public void SetPositionEnabled(bool status)
    {
        m_CharacterAvatarContainer.SetActive(status);
    }
}
