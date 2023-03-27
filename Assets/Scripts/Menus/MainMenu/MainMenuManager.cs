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
    CreateRoom
}

public class MainMenuManager : MonoBehaviour
{
    [SerializeField] private List<MainMenuBase> m_Menus;
    
    [SerializeField] private MenuTransitionEvent m_MenuTransitionEvent;
    [SerializeField] private VoidEvent m_RoomJoinFailedEvent;
    
    private MenuName m_CurrentMenuStates;

    private void Start()
    {
        SetMenuState(MenuName.MainMenu);
    }

    private void OnEnable()
    {
        m_MenuTransitionEvent.Register(OnMenuTransition);
        m_RoomJoinFailedEvent.Register(ShowRoomCreationScreen);
    }

    private void OnDisable()
    {
        m_MenuTransitionEvent.Unregister(OnMenuTransition);
        m_RoomJoinFailedEvent.Unregister(ShowRoomCreationScreen);

    }

    private void ShowRoomCreationScreen()
    {
        SetMenuState(MenuName.CreateRoom);
    }
    
    private void OnMenuTransition(MenuName menuName)
    {
        SetMenuState(menuName);
    }

    private void SetMenuState_Internal(MenuName menuName)
    {
        m_CurrentMenuStates = menuName;
    }

    private void SetMenuState(MenuName menuName)
    {
        SetMenuState_Internal(menuName);
        HideAllMenus();

        if (menuName is MenuName.None)
            return;
        m_Menus.Find(x => x.MenuName == menuName).SetMenuActiveState(true);
    }

    private void HideAllMenus()
    {
        for (int i = 0; i < m_Menus.Count; i++)
        {
            m_Menus[i].SetMenuActiveState(false);
        }
    }
}
