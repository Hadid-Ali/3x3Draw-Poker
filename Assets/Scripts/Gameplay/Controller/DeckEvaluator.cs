using UnityEngine;
using TMPro;

public class DeckEvaluator : MonoBehaviour
{
    [SerializeField] private DeckName m_DeckName;
    [SerializeField] private TMP_Text m_HandType;

    private void OnEnable()
    {
        GameEvents.GameplayEvents.CardDeckUpdated.Register(OnDeckUpdated);
    }

    private void OnDisable()
    {
       GameEvents.GameplayEvents.CardDeckUpdated.UnRegister(OnDeckUpdated);
    }

    public void OnDeckUpdated(DeckName deckName, HandTypes handType)
    {
        if (m_DeckName != deckName)
            return;
        
        m_HandType.text = handType.ToString();
    }
}
