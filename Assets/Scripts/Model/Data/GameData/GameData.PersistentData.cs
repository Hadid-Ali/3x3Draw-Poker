using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static partial class GameData
{
    public static class PersistentData
    {
        private static string _userName = "UserName";
        private static string _selectedCharacter = "SelectedCharacter";
        private static string _selectedCardBack = "SelectedCard";

        public static string UserName
        {
            get => PlayerPrefs.GetString(_userName, string.Empty);
            set
            {
                PlayerPrefs.SetString(_userName, value);
                PlayerPrefs.Save();
            }
        }
        
        public static int SelectedCharacter
        {
            get => PlayerPrefs.GetInt(_selectedCharacter, 0);
            set
            {
                PlayerPrefs.SetInt(_selectedCharacter, value);
                PlayerPrefs.Save();
            }
        }
        
        public static int SelectedCard
        {
            get => PlayerPrefs.GetInt(_selectedCardBack, 0);
            set
            {
                PlayerPrefs.SetInt(_selectedCardBack, value);
                PlayerPrefs.Save();
            }
        }
    }
}