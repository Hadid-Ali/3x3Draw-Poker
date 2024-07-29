using UnityEngine;
using UnityEngine.UI;

public abstract class StoreItemUI<T> : MonoBehaviour
{
    [SerializeField] private Image itemBgImage;
    [SerializeField] private Color selectedColor;
    [SerializeField] private Color unselectedColor;
    [SerializeField] private CanvasGroup group;

    [SerializeField] private float selectedOpacity;
    [SerializeField] private float unselectedOpacity;


    public void OnItemSelected()
    {
        itemBgImage.color = selectedColor;
        group.alpha = selectedOpacity;
    }
    public void OnItemUnSelected()
    {
        itemBgImage.color = unselectedColor;
        group.alpha = unselectedOpacity;
    }

    public abstract void InitializeItem(T parameter1);



}
