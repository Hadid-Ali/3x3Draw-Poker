using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MainMenuBase
{
    [SerializeField] private Button m_PlayButton;

    private void Start()
    {
        m_PlayButton.onClick.AddListener(LoginBtnEvent);
    }

    public void LoginBtnEvent()
    {
        ChangeMenuState(MenuName.LoginScreen);
    }
}
