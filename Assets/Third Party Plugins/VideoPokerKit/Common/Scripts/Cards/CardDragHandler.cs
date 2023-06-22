using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class CardDragHandler : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    private RectTransform deckTransform;
    private Vector2 initialPosition;
    private List<CardDragHandler> cardHandlers;
    [SerializeField] private Card m_Card;

    private void Awake()
    {
        deckTransform = transform.parent.GetComponent<RectTransform>();
        cardHandlers = new List<CardDragHandler>(deckTransform.GetComponentsInChildren<CardDragHandler>());
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        initialPosition = deckTransform.position;

        if (GameCardsMediator.CurrentData != null)
            return;

        SetDeckDraggingEnabled(false);
        GameEvents.GameplayEvents.CardReplacedEvent.Raise(m_Card.CardData);
        m_Card.SaveData();
    }

    public void OnDrag(PointerEventData eventData)
    {
        deckTransform.position = eventData.position;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        SetDeckDraggingEnabled(true);

        if (eventData.pointerCurrentRaycast.gameObject.CompareTag("Deck"))
        {
            var targetDeckTransform = eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<RectTransform>();
            var targetDeckCardHandlers = new List<CardDragHandler>(targetDeckTransform.GetComponentsInChildren<CardDragHandler>());

            // Swap the positions of the two decks
            var targetPosition = targetDeckTransform.position;
            targetDeckTransform.position = initialPosition;
            deckTransform.position = targetPosition;

            // Swap the card handlers between the two decks
            foreach (var cardHandler in cardHandlers)
            {
                cardHandler.transform.SetParent(targetDeckTransform);
            }

            foreach (var cardHandler in targetDeckCardHandlers)
            {
                cardHandler.transform.SetParent(deckTransform);
            }
        }
        else
        {
            deckTransform.position = initialPosition;
        }
    }

    private void SetDeckDraggingEnabled(bool enabled)
    {
        foreach (var cardHandler in cardHandlers)
        {
            cardHandler.enabled = enabled;
        }
    }
}
