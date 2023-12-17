using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIMenu : UIMenuBase
{
    [SerializeField] private Button m_PlayButton;

    private void Start()
    {
        m_PlayButton.onClick.AddListener(LoginBtnEvent);
    }

    public void LoginBtnEvent()
    {
        if (GameData.RuntimeData.IS_LOGGED_IN)
        {
            ChangeMenuState(MenuName.ConnectionScreen);
        }
        else
        {

            ChangeMenuState(MenuName.LoginScreen);
        }
    }
}
