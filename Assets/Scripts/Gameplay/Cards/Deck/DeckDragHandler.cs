using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DeckDragHandler : MonoBehaviour, IBeginDragHandler,IPointerDownHandler,IPointerUpHandler,IPointerExitHandler
{
    [SerializeField] private CardsDeckViewHandler m_ViewHandler;

    private VerticalLayoutGroup m_VerticalLayout;
    
    private bool m_Dragging = false;
    private int m_LastHoverDeck = -1;

    private void Start()
    {
        m_VerticalLayout = GetComponentInParent<VerticalLayoutGroup>();
    }
    
    private void OnTriggerEnter2D(Collider2D col)
    {
        if (!m_Dragging)
            return;

        if (col.gameObject.CompareTag("Deck"))
        {
            m_LastHoverDeck = col.transform.GetSiblingIndex();
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        ResetDeckIndex();
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        m_Dragging = true;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        m_ViewHandler.SetFocused(true);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        m_Dragging = false;

        if (m_LastHoverDeck != -1)
        {
            transform.SetSiblingIndex(m_LastHoverDeck); 
            ResetDeckIndex();
        }

        m_VerticalLayout.SetLayoutVertical();
        GameEvents.GameplayUIEvents.DeckArrangementUpdated.Raise();
        m_ViewHandler.SetFocused(false);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        m_ViewHandler.SetFocused(false);
    }

    private void ResetDeckIndex()
    {
        m_LastHoverDeck = -1;
    }
}