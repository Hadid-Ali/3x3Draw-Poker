using System;
using UnityEngine;
using UnityEngine.UI;

public abstract class StoreItemUI : MonoBehaviour
{
    [SerializeField] private Image itemBgImage;
    [SerializeField] private Color selectedColor;
    [SerializeField] private Color unselectedColor;
    [SerializeField] private CanvasGroup group;

    [SerializeField] private float selectedOpacity;
    [SerializeField] private float unselectedOpacity;

    public ItemName itemName;
    public virtual void OnItemSelected()
    {
        itemBgImage.color = selectedColor;
        group.alpha = selectedOpacity;
    }
    public virtual void OnItemUnSelected()
    {
        itemBgImage.color = unselectedColor;
        group.alpha = unselectedOpacity;
    }
    
    public abstract void InitializeItem(ItemProperty parameter1);
}
