using System;
using UnityEngine;
using System.Collections.Generic;
using UnityEngine.Serialization;
using UnityEngine.XR;
using Random = UnityEngine.Random;

public class CardsManager : MonoBehaviour
{
	[SerializeField] private DecksHandler m_DecksHandler;
	// screen cards
	[Header("Player cards"),SerializeField] private Card [] m_GameCards;

	[SerializeField] private GameplayHandTypeEvent m_HandTypeEvent;

	// temporary cards used for evaluating hand
	CardData [] workCards;

	
	//--------------------------------------------------------

	// Use this for initialization
	void Start () 
	{
		workCards = new CardData[5];
		for(int i=0; i<5; i++)
			workCards[i] = new CardData();
	}

	private void OnEnable()
	{
		GameEvents.GameplayUIEvents.CardsArrangementUpdated.Register(OnCardsArrangementUpdated);
		GameEvents.GameplayEvents.UserHandReceivedEvent.Register(DealCards);
	}

	private void OnDisable()
	{
		GameEvents.GameplayUIEvents.CardsArrangementUpdated.Unregister(OnCardsArrangementUpdated);
		GameEvents.GameplayEvents.UserHandReceivedEvent.Unregister(DealCards);

	}

	private void OnCardsArrangementUpdated(Card[] cards)
	{
		m_GameCards = null;
		m_GameCards = cards;
	}
	
	public void ClearHand()
	{
		// make cards vanish
		for (int i=0; i<5; i++) 			
			m_GameCards [i].ClearAfterDeal();
	}

	//--------------------------------------------------------

	public void ResetDeck()
	{
		// mark all cards as not dealt
	//	for(int i = 0; i<m_CardsRegistry.Count; i++)
	//		m_CardsRegistry[i].dealt = false;
	}
	
	//--------------------------------------------------------
	
	public void DealCards(CardData[] cardsData)
	{
		for (int i = 0; i < m_GameCards.Length; i++)
		{
			m_GameCards[i].SetData(cardsData[i], true, true);
		}
	}

	public int DealCards()
	{
		MainGame.the.gameState = MainGame.STATE_DEALING;

		CardData[] data = m_DecksHandler.GetRandomHand(m_GameCards.Length);
		// set cards values
		for (int i = 0; i < m_GameCards.Length; i++)
		{
			// extract new card from the deck and attach it to the screen card
			m_GameCards[i].SetData(data[i], true, true);
		}

		// we deal 5 cards
		return m_GameCards.Length;
	}

	//--------------------------------------------------------

	public static HandType EvaluateDeck(CardData[] cards)
	{
		// evaluate the temp hand
		HandEvaluator.Evaluate(cards, out HandType handType); // show wins only in the RESULTS stage
		return handType;
	}

	public void EvaluateHand()
	{
		// copy cards into a separate array of cards
		// (they will be sorted and better not mess up original cards)
		for(int i=0; i<5; i++)			
			workCards[i].CopyInfoFrom( m_GameCards[i].CardData );

		// evaluate the temp hand
		HandEvaluator.Evaluate( workCards,out HandType handType ); // show wins only in the RESULTS stage

		bool cardsWereHolded = false;
		m_HandTypeEvent.Raise(handType);

		// // apply auto holds to the cards on the screen or highlight winner cards
		// foreach(CardData workCard in workCards)			
		// {
		// 	foreach(Card screenCard in m_GameCards)
		// 	{
		// 		// compare the work cards and the screen cards
		// 		if(workCard.sprite == screenCard.CardData.sprite)
		// 		{
		// 			// if we are after first deal
		// 			if(MainGame.the.gameState == MainGame.STATE_WAIT_HOLD)
		// 			{
		// 				// if the card was auto-holded, mark it on the screen
		// 				if(workCard.hold)
		// 				{
		// 					cardsWereHolded = true;
		// 				}
		// 			}
		// 			// else // game end
		// 			// 	if(MainGame.the.gameState == MainGame.STATE_SHOW_RESULTS)							
		// 			// 		screenCard.SetResultsState( workCard.hold );
		//
		// 			//*****************
		// 			// NOTE
		// 			// the cards are 'holded' internally in the second hand too,
		// 			// but are not updated on the screen with the HOLD tag because
		// 			// we don't need this in the final results stage
		// 			//*****************
		//
		// 			break;
		// 		}
		// 	}
		// }
		//
		// // play autohold sound
		// if(cardsWereHolded)
		// 	SoundsManager.the.autoHoldSound.Play();
	}

	//--------------------------------------------------------
}
