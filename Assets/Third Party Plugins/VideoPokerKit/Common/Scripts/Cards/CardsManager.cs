using UnityEngine;
using System.Collections;
using UnityEngine.Serialization;
using UnityEngine.XR;

public class CardsManager : MonoBehaviour 
{
	// all the cards in the deck (set in the inspector)
	[Header("The deck"),SerializeField] private CardData [] m_CardsRegistry;

	// screen cards
	[Header("Player cards"),SerializeField] private CardContainer [] m_GameCardContainers;

	// temporary cards used for evaluating hand
	CardData [] workCards;

	// change these timers in the Inspector for faster/slower deals
	[Header("Deal settings")]
	public float firstHandDealDelayBetweenCards = 0.4f;
	public float secondHandDealDelayBetweenCards = 0.3f;


	[SerializeField] private GameplayHandTypeEvent m_HandTypeEvent;
	//--------------------------------------------------------

	// Use this for initialization
	void Start () 
	{
		workCards = new CardData[5];
		for(int i=0; i<5; i++)
			workCards[i] = new CardData();
	}

	//----------------------------------------------------
	
	public void ClearHand()
	{
		// make cards vanish
		for (int i=0; i<5; i++) 			
			m_GameCardContainers [i].ClearCardData();
	}

	//--------------------------------------------------------

	public void ResetDeck()
	{
		// mark all cards as not dealt
		for(int i = 0; i<m_CardsRegistry.Length; i++)
			m_CardsRegistry[i].dealt = false;
	}

	//--------------------------------------------------------

	public CardData GetNewCardFromTheDeck()
	{
		int idx = 0;
		do
		{
			// get a random card
			idx = Random.Range(0,52);
		}
		while( m_CardsRegistry[idx].dealt ); // check to see if it's already drawn

		// mark the new card as drawn
		m_CardsRegistry[idx].dealt = true;

		return m_CardsRegistry[idx];
	}

	//--------------------------------------------------------

	public int DealCards(bool firstHand)
	{
			MainGame.the.gameState = MainGame.STATE_DEALING;

			// set cards values
			for (int i = 0; i < m_GameCardContainers.Length; i++)
			{
				// extract new card from the deck and attach it to the screen card
				m_GameCardContainers[i].SetData(GetNewCardFromTheDeck());
			}

			// // start deal animations for all five cards with a small delay in between
			// for (int i=0; i<5; i++) 			
			// 	m_GameCardContainers [i].DealWithDelay (i * firstHandDealDelayBetweenCards);

			// we deal 5 cards
		return m_GameCardContainers.Length;
	}

	//--------------------------------------------------------

	public void EvaluateHand()
	{
		// copy cards into a separate array of cards
		// (they will be sorted and better not mess up original cards)
		for(int i=0; i<5; i++)			
			workCards[i].CopyInfoFrom( m_GameCardContainers[i].CardData );

		// evaluate the temp hand
		HandEvaluator.Evaluate( workCards, 		                       	
		                       	false, // auto-hold enabled
		                       	false,out HandType handType ); // show wins only in the RESULTS stage

		bool cardsWereHolded = false;
		m_HandTypeEvent.Raise(handType);

		// apply auto holds to the cards on the screen or highlight winner cards
		foreach(CardData workCard in workCards)			
		{
			foreach(CardContainer screenCard in m_GameCardContainers)
			{
				// compare the work cards and the screen cards
				if(workCard.sprite == screenCard.CardData.sprite)
				{
					// if we are after first deal
					if(MainGame.the.gameState == MainGame.STATE_WAIT_HOLD)
					{
						// if the card was auto-holded, mark it on the screen
						if(workCard.hold)
						{
							cardsWereHolded = true;
						}
					}
					// else // game end
					// 	if(MainGame.the.gameState == MainGame.STATE_SHOW_RESULTS)							
					// 		screenCard.SetResultsState( workCard.hold );

					//*****************
					// NOTE
					// the cards are 'holded' internally in the second hand too,
					// but are not updated on the screen with the HOLD tag because
					// we don't need this in the final results stage
					//*****************

					break;
				}
			}
		}

		// play autohold sound
		if(cardsWereHolded)
			SoundsManager.the.autoHoldSound.Play();
	}

	//--------------------------------------------------------
}
