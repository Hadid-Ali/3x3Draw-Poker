using System;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class CharacterItemUI : StoreItemUI
{
    [SerializeField] private Image characterImage;
    [SerializeField] private TextMeshProUGUI price;
    [SerializeField] private TextMeshProUGUI itemNameText;
    
    [SerializeField] private Button button;
    private void Awake()
    {
        button.onClick.AddListener(()=>GameEvents.StoreEvents.OnStoreItemSelected.Raise(itemName));
    }
    
    public override void InitializeItem(ItemProperty parameter1)
    {
        characterImage.sprite = parameter1.Picture;
        price.SetText(parameter1.price);
        itemNameText.SetText(parameter1.name.ToString());

        itemName = parameter1.name;
        OnItemUnSelected();
    }
}
