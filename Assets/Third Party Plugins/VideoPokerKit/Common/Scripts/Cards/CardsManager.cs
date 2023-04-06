using UnityEngine;
using System.Collections;

public class CardsManager : MonoBehaviour 
{
	// all the cards in the deck (set in the inspector)
	[Header("The deck")]
	public CardData [] cardLibrary;

	// screen cards
	[Header("Player cards")]
	public Card [] gameCards;

	// temporary cards used for evaluating hand
	CardData [] workCards;

	// change these timers in the Inspector for faster/slower deals
	[Header("Deal settings")]
	public float firstHandDealDelayBetweenCards = 0.4f;
	public float secondHandDealDelayBetweenCards = 0.3f;

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
			gameCards [i].ClearAfterDeal();
	}

	//--------------------------------------------------------

	public void ResetDeck()
	{
		// mark all cards as not dealt
		for(int i = 0; i<cardLibrary.Length; i++)
			cardLibrary[i].dealt = false;
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
		while( cardLibrary[idx].dealt ); // check to see if it's already drawn

		// mark the new card as drawn
		cardLibrary[idx].dealt = true;

		return cardLibrary[idx];
	}

	//--------------------------------------------------------

	public int DealCards(bool firstHand)
	{
		// if first hand
		if (firstHand) 
		{
			// set the state as DEALING
			MainGame.the.gameState = MainGame.STATE_DEALING;

			// set cards values
			for (int i=0; i<5; i++) 			
			{
				// extract new card from the deck and attach it to the screen card
				gameCards[i].SetCardData( GetNewCardFromTheDeck() );
			}

			// start deal animations for all five cards with a small delay in between
			for (int i=0; i<5; i++) 			
				gameCards [i].DealWithDelay (i * firstHandDealDelayBetweenCards);

			// we deal 5 cards
			return 5;
		}
		else 
		{
			// set the new dealing state
			MainGame.the.gameState = MainGame.STATE_DEALING2;

			// second hand
			int cardsDealt = 0; // count separately the non holded cards
			for (int i=0; i<5; i++) 
			{
				// deal only the non holded cards
				if( !gameCards[i].IsHolded() )
				{
					// generate a new random card from the deck
					// and assign it to the card on the screen
					gameCards[i].SetCardData( GetNewCardFromTheDeck() );

					// start vanish animation and prepare the deal
					gameCards[i].VanishAndDealAgainWithDelay(cardsDealt * secondHandDealDelayBetweenCards);
					cardsDealt++;
				}
				else
					gameCards[i].ResetHold(); // remove hold marker for holded cards
			}
			return cardsDealt;
		}
	}

	//--------------------------------------------------------

	public void EvaluateHand()
	{
		// copy cards into a separate array of cards
		// (they will be sorted and better not mess up original cards)
		for(int i=0; i<5; i++)			
			workCards[i].CopyInfoFrom( gameCards[i].CardData );

		// evaluate the temp hand
		HandEvaluator.Evaluate( workCards, 		                       	
		                       	false, // auto-hold enabled
		                       	true ); // show wins only in the RESULTS stage

		bool cardsWereHolded = false;

		// apply auto holds to the cards on the screen or highlight winner cards
		foreach(CardData workCard in workCards)			
		{
			foreach(Card screenCard in gameCards)
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
							screenCard.ToggleHold();
							cardsWereHolded = true;
						}
					}
					else // game end
						if(MainGame.the.gameState == MainGame.STATE_SHOW_RESULTS)							
							screenCard.SetResultsState( workCard.hold );

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
