using System;
using System.Collections;
using System.Collections.Generic;
using UnityAtoms.BaseAtoms;
using UnityEngine;

public enum MenuName
{
    None,
    MainMenu,
    LoginScreen,
    RegionSelectionScreen,
    ConnectionScreen,
    CreateRoom,
    LoadingScreen,
    RoundCompleteMenu
}

public abstract class MenusController : MonoBehaviour
{
    [SerializeField] private List<UIMenuBase> m_Menus;
    [SerializeField] private MenuTransitionEvent m_MenuTransitionEvent;
    
    private MenuName m_CurrentMenuStates;

    private void Start()
    {
        SetMenuState(MenuName.MainMenu);
    }

    protected virtual void OnEnable()
    {
        m_MenuTransitionEvent.Register(OnMenuTransition);
    }

    protected virtual  void OnDisable()
    {
        m_MenuTransitionEvent.Unregister(OnMenuTransition);

    }
    
    protected void SetMenuState(MenuName menuName)
    {
        SetMenuState_Internal(menuName);
        HideAllMenus();

        if (menuName is MenuName.None)
            return;
        m_Menus.Find(x => x.MenuName == menuName).SetMenuActiveState(true);
    }
    
    private void OnMenuTransition(MenuName menuName)
    {
        SetMenuState(menuName);
    }

    private void SetMenuState_Internal(MenuName menuName)
    {
        m_CurrentMenuStates = menuName;
    }



    private void HideAllMenus()
    {
        for (int i = 0; i < m_Menus.Count; i++)
        {
            m_Menus[i].SetMenuActiveState(false);
        }
    }
}