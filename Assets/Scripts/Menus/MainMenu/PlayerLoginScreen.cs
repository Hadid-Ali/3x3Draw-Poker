using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityAtoms.BaseAtoms;
using UnityEngine;
using UnityEngine.UI;

public class PlayerLoginScreen : MainMenuBase
{
    [SerializeField] private StringEvent m_PlayerLoginEvent;
    [SerializeField] private TMP_InputField m_InputField;

    [SerializeField] private Button m_LoginButton;
    
    private void Start()
    {
        m_InputField.onValueChanged.AddListener(OnFieldValueChange);
        m_LoginButton.onClick.AddListener(OnLoginBtnEvent);
        OnFieldValueChange(string.Empty);
    }

    private void OnFieldValueChange(string value)
    {
        m_LoginButton.interactable = !string.IsNullOrEmpty(value) && value.Length > 3;
    }

    public void OnLoginBtnEvent()
    {
        m_PlayerLoginEvent.Raise(m_InputField.text);
        ChangeMenuState(MenuName.ConnectionScreen);
    }
}
