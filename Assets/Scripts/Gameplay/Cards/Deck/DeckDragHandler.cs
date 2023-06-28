using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DeckDragHandler : MonoBehaviour, IBeginDragHandler,IPointerDownHandler,IPointerUpHandler,IPointerExitHandler
{
    [SerializeField] private CardsDeckViewHandler m_ViewHandler;

    private VerticalLayoutGroup m_VerticalLayout;
    
    private bool m_Dragging = false;
    private int m_LastHoverDeck;

    private void Start()
    {
        m_VerticalLayout = GetComponentInParent<VerticalLayoutGroup>();
    }

    private void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            m_Dragging = false;
            if (m_LastHoverDeck != -1)
                transform.SetSiblingIndex(m_LastHoverDeck);
        }
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
        m_LastHoverDeck = -1;
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
        m_ViewHandler.SetFocused(false);
        m_VerticalLayout.SetLayoutVertical();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        m_ViewHandler.SetFocused(false);
    }
}
