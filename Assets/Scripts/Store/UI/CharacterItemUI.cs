using System;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class CharacterItemUI : StoreItemUI
{
    [SerializeField] private Image characterImage;

    private void Awake()
    {
        SubscribeAction(OnItemClick);
    }

    private void OnItemClick()
    {
        GameEvents.StoreEvents.OnStoreItemSelected.Raise(itemName);
    }

    public override void InitializeItem(ItemProperty parameter1)
    {
        characterImage.sprite = parameter1.Picture;
        itemName = parameter1.name;
        OnItemUnSelected();
    }
}
