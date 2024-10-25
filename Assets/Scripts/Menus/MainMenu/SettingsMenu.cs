using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class SettingsMenu : UIMenuBase
{
    [SerializeField] private VideoControllerUIHandler m_HowToPlayVideoObject;
    
    [SerializeField] private ButtonWidget m_PrivacyPolicyButton;
    [SerializeField] private ButtonWidget m_TermsOfUsageButton;
    
    [SerializeField] private ButtonWidget m_FindOutMoreButton;
    [SerializeField] private ButtonWidget m_HowToPlayButton;
    
    [SerializeField] private ButtonWidget m_BackButton;
    [SerializeField] private ButtonWidget m_CloseButton;

    [SerializeField] private ButtonWidget m_SoundButton;
    [SerializeField] private Image soundImage;

    [SerializeField] private Sprite soundOn;
    [SerializeField] private Sprite soundOff;

    [SerializeField] private ButtonWidgetWithStatus[] difficultyButtons;
        
    [SerializeField] private Slider _targetScoreSlider;
    [SerializeField] private TextMeshProUGUI _targetScoreText;
    
    private void Start()
    {
        m_PrivacyPolicyButton.SubscribeAction(OnPrivacyPolicyButton);
        m_TermsOfUsageButton.SubscribeAction(OnTermsOfUsageButton);
        
        m_BackButton.SubscribeAction(OnBackButton);
        m_CloseButton.SubscribeAction(OnCloseButton);
        
        m_FindOutMoreButton.SubscribeAction(FindOutMore);
        m_HowToPlayButton.SubscribeAction(StartHowToPlayVideo);
        
        m_HowToPlayVideoObject.Initialize();
        m_SoundButton.SubscribeAction(SetMute);
        
        difficultyButtons[0].SubscribeAction(()=>SetDifficulty(BotsDifficulty.Easy));
        difficultyButtons[1].SubscribeAction(()=>SetDifficulty(BotsDifficulty.Medium));
        difficultyButtons[2].SubscribeAction(()=>SetDifficulty(BotsDifficulty.Hard));
        InitializeSlider();
    }

    private void InitializeSlider()
    {
        _targetScoreSlider.value = GameData.PersistentData.OfflineTargetScore;
        
        _targetScoreSlider.onValueChanged.AddListener(OnTargetOfflineScoreChanged);
        OnTargetOfflineScoreChanged(GameData.PersistentData.OfflineTargetScore);
    }
    
    private void OnTargetOfflineScoreChanged(float value)
    {
        GameData.PersistentData.OfflineTargetScore = (int)value;
        _targetScoreText.text = value.ToString(CultureInfo.InvariantCulture);
    }

    private void OnEnable()
    {
        UpdateSoundImage();
        UpdateDifficultyUI();
    }

    private void UpdateSoundImage()
    {
        int currentStatus = PlayerPrefs.GetInt(GameData.MetaData.MuteString,1);
        soundImage.sprite = currentStatus == 1 ? soundOn : soundOff;
    }

    private void SetDifficulty(BotsDifficulty diff)
    {
        PlayerPrefs.SetInt(GameData.MetaData.BotDifficulty, (int) diff);
        UpdateDifficultyUI();
    }

    private void UpdateDifficultyUI()
    {
        int botsDiffInt = PlayerPrefs.GetInt(GameData.MetaData.BotDifficulty, 
            (int) GameData.MetaData.DefaultBotDifficulty);

        for (int i = 0; i < difficultyButtons.Length; i++)
        {
            difficultyButtons[i].SetFocusedAndPressed(i == botsDiffInt);
        }
    }

    private void SetMute()
    {
        int currentStatus = PlayerPrefs.GetInt(GameData.MetaData.MuteString,1); 
        
        PlayerPrefs.SetInt(GameData.MetaData.MuteString, currentStatus == 1 ? 0 : 1);

        AudioListener.pause = currentStatus == 1;
        UpdateSoundImage();
    }

    private void StartHowToPlayVideo()
    {
        m_HowToPlayVideoObject.Show();
    }
    
    private void FindOutMore()
    {
        Application.OpenURL(GameData.MetaData.AppWebsiteLink);
    }

    private void OnPrivacyPolicyButton()
    {
        Application.OpenURL(GameData.MetaData.PrivacyPolicyLink);
    }

    private void OnTermsOfUsageButton()
    {
        Application.OpenURL(GameData.MetaData.TermsOfUsageLink);
    }
    
    private void OnBackButton()
    {
        ChangeMenuState(MenuName.MainMenu);
    }

    private void OnCloseButton()
    {
        OnBackButton();
    }
}
