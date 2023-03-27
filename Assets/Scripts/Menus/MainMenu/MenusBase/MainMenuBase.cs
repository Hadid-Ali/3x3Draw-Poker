using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MainMenuBase : MonoBehaviour
{
    [SerializeField] private MenuName m_MenuName;
    [SerializeField] private GameObject m_MenuContainer;

    [SerializeField] private MenuTransitionEvent m_MenuTransitionEvent;
    
    public MenuName MenuName => m_MenuName;

    public void SetMenuActiveState(bool isActive)
    {
        m_MenuContainer.SetActive(isActive);
    }

    public void ChangeMenuState(MenuName menuName)
    {
        if (m_MenuTransitionEvent != null)
            m_MenuTransitionEvent.Raise(menuName);
    }
}
