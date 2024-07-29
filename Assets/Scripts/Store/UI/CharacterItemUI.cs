using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CharacterItemUI : StoreItemUI<ItemProperty>
{
    [SerializeField] private Image characterImage;
    [SerializeField] private TextMeshProUGUI price;
    [SerializeField] private TextMeshProUGUI characterName;
    
    public override void InitializeItem(ItemProperty parameter1)
    {
        characterImage.sprite = parameter1.Picture;
        price.SetText(parameter1.price);
        characterName.SetText(parameter1.name);
    }
}
