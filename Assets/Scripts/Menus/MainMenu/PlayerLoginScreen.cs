using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityAtoms.BaseAtoms;
using UnityEngine;
using UnityEngine.UI;

public class PlayerLoginScreen : UIMenuBase
{
    [SerializeField] private StringEvent m_PlayerLoginEvent;
    [SerializeField] private TMP_InputField m_InputField;

    [SerializeField] private Button m_LoginButton;
    
    private void Start()
    {
        m_InputField.onValueChanged.AddListener(OnFieldValueChange);
        m_LoginButton.onClick.AddListener(OnLoginBtnEvent);

        SetButtonInteractionStatus(false);
        
        OnFieldValueChange(string.Empty);
        m_InputField.characterLimit = GameData.MetaData.MaximumNameLength;
    }

    private void OnFieldValueChange(string value)
    {
        bool hasValidLenght = value.Length >= GameData.MetaData.MinimumNameLength;

        SetButtonInteractionStatus(!string.IsNullOrEmpty(value) && hasValidLenght);
    }

    public void OnLoginBtnEvent()
    {
        m_PlayerLoginEvent.Raise(m_InputField.text);
        ChangeMenuState(MenuName.ConnectionScreen);
        GameData.RuntimeData.IS_LOGGED_IN = true;
    }

    private void SetButtonInteractionStatus(bool status)
    {
        m_LoginButton.interactable = status;
    }
}
