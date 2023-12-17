using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTablePosition : MonoBehaviour
{
    [SerializeField] private int m_TablePositionIndex;
    [SerializeField] private PlayerTablePositionView m_PositionView;

    public int TablePositionIndex => m_TablePositionIndex;
    
    public void SetAvatarIndex(int index)
    {
        m_PositionView.SetPositionEnabled(true);
        m_PositionView.SelectCharacterAtIndex(index);
    }
}
