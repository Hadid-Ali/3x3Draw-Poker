using UnityEngine;
using System.Collections;

public class HandEvaluator 
{
	//*************
	// NOTE
	// This working class is used for evaluating a poker hand (5 cards)
	// and detect the best possible win (with the greatest outcome)
	// The methods and members are static so that they can be called directly
	// without the need to use an instance object
	//*************


	static CardData [] workCards;
	static int [] cardsValueCount = new int[ (int)CardValue.VALUES_NO ];
	static int [] cardsTypeCount = new int[ (int)CardType.TYPES_NO ];

	// all combinations of sorted cards for STRAIGHT 
	// (for this type of win, it is more simpler to do it like this instead of using an algorithm)
	static CardValue [][] straightSets = new CardValue[][] {	
		new CardValue[] {CardValue.VALUE_2, CardValue.VALUE_3, CardValue.VALUE_4, CardValue.VALUE_5, CardValue.VALUE_A},
		new CardValue[] {CardValue.VALUE_2, CardValue.VALUE_3, CardValue.VALUE_4, CardValue.VALUE_5, CardValue.VALUE_6},
		new CardValue[] {CardValue.VALUE_3, CardValue.VALUE_4, CardValue.VALUE_5, CardValue.VALUE_6, CardValue.VALUE_7},
		new CardValue[] {CardValue.VALUE_4, CardValue.VALUE_5, CardValue.VALUE_6, CardValue.VALUE_7, CardValue.VALUE_8},
		new CardValue[] {CardValue.VALUE_5, CardValue.VALUE_6, CardValue.VALUE_7, CardValue.VALUE_8, CardValue.VALUE_9},
		new CardValue[] {CardValue.VALUE_6, CardValue.VALUE_7, CardValue.VALUE_8, CardValue.VALUE_9, CardValue.VALUE_10},
		new CardValue[] {CardValue.VALUE_7, CardValue.VALUE_8, CardValue.VALUE_9, CardValue.VALUE_10, CardValue.VALUE_J},
		new CardValue[] {CardValue.VALUE_8, CardValue.VALUE_9, CardValue.VALUE_10, CardValue.VALUE_J, CardValue.VALUE_Q},
		new CardValue[] {CardValue.VALUE_9, CardValue.VALUE_10, CardValue.VALUE_J, CardValue.VALUE_Q, CardValue.VALUE_K},
		new CardValue[] {CardValue.VALUE_10, CardValue.VALUE_J, CardValue.VALUE_Q, CardValue.VALUE_K, CardValue.VALUE_A}};
	
	//--------------------------------------------------------
	// internal class used to compare 2 cards
	public class CardComparer : IComparer  
	{
		int IComparer.Compare( System.Object x, System.Object y )  		
		{
			return( ((CardData)x).value >= ((CardData)y).value ? 1 : -1 );
		}		
	}

	//--------------------------------------------------------

	// from the specified array, hold the card with the passed value and type
	static void HoldCard(CardData [] cards, CardValue value, CardType type)
	{
		foreach(CardData card in cards)
		{
			if(card.value == value && card.type == type)
			{
				card.hold = true;
				return;
			}
		}
	}

	// from the specified array, hold all the cards with a specific value
	static void HoldCardsByValue(CardData [] cards, CardValue value)
	{
		foreach(CardData card in cards)
		{
			if(card.value == value)
				card.hold = true;
		}
	}

	// from the specified array, hold all the cards with a specific type
	static void HoldCardsByType(CardData [] cards, CardType type)
	{
		foreach(CardData card in cards)
		{
			if(card.type == type)
				card.hold = true;
		}
	}

	static void HoldAll(CardData [] cards)
	{
		foreach(CardData card in cards)
			card.hold = true;
	}

	//--------------------------------------------------------

	public static void Evaluate(CardData[] cards, bool autoHold, bool showWin)
	{
		// define all win flags needed in video poker
		bool bOnePair = false;
		bool bTwoPair = false;
		bool bThree = false;
		bool bStraight = false;
		bool bFlush = false;
		bool bFullHouse = false;
		bool bFour = false;
		bool bStraightFlush = false;

		// remember first pair value in case we need it later
		// (for 2 pair wins)
		int firstPairValue = 0;

		// sort cards based of value so that we end up with a sorted array
		System.Array.Sort(cards, new CardComparer());

		/*
		Debug.Log("Sorted cards: ");
		for(int i=0; i<cards.Length; i++)
			Debug.Log(""+cards[i].value);
		*/

		// count cards by value
		for (int i = 0; i < cardsValueCount.Length; i++)
			cardsValueCount[i] = 0; // first reset all counters
		for (int i = 0; i < cards.Length; i++)
			cardsValueCount[(int)cards[i].value]++; // count

		// count types by type
		for (int i = 0; i < cardsTypeCount.Length; i++)
			cardsTypeCount[i] = 0;
		for (int i = 0; i < cards.Length; i++)
			cardsTypeCount[(int)cards[i].type]++;

		//Debug.Log("Counted cards: ");
		//for(int i=0; i<cardsCount.Length; i++)
		//	Debug.Log(""+cardsCount[i]);

		// go through all the value counters
		for (int i = 0; i < cardsValueCount.Length; i++)
		{
			// check one and two pairs
			if (cardsValueCount[i] == 2)
			{
				if (!bOnePair)
				{
					bOnePair = true;
					firstPairValue = i;
					Debug.Log("One pair");

					// show win only if starting from JACKS
					if (i >= (int)CardValue.VALUE_J)
					{
						if (showWin)
							Paytable.the.SetCurrentWin(Wins.WIN_JACKS_OR_BETTER);
						if (autoHold)
							HoldCardsByValue(cards, (CardValue)i);
					}
				}
				else
				{
					bTwoPair = true;
					Debug.Log("Two pair");
					if (showWin)
						Paytable.the.SetCurrentWin(Wins.WIN_TWO_PAIR);
					if (autoHold)
					{
						HoldCardsByValue(cards, (CardValue)i);
						// mark first pair too (in case it was missed first time i.e 
						// if it's lower than JACKS)
						HoldCardsByValue(cards, (CardValue)firstPairValue);
					}
				}
			}

			// check three of a kind
			if (cardsValueCount[i] == 3)
			{
				bThree = true;
				Debug.Log("Three of a kind");
				if (showWin)
					Paytable.the.SetCurrentWin(Wins.WIN_THREE_OF_A_KIND);
				if (autoHold)
					HoldCardsByValue(cards, (CardValue)i);
			}

			// check for of a kind
			if (cardsValueCount[i] == 4)
			{
				bFour = true;
				Debug.Log("Four of a kind");
				if (showWin)
					Paytable.the.SetCurrentWin(Wins.WIN_FOUR_OF_A_KIND);
				if (autoHold)
					HoldCardsByValue(cards, (CardValue)i);
			}
		}

		// check flush
		for (int i = 0; i < cardsTypeCount.Length; i++)
			if (cardsTypeCount[i] == 5)
			{
				bFlush = true;
				Debug.Log("Flush");
				if (showWin)
					Paytable.the.SetCurrentWin(Wins.WIN_FLUSH);
				if (autoHold)
					HoldCardsByType(cards, (CardType)i);
			}

		// check straight
		for (int i = 0; i < straightSets.Length; i++)
		{
			int match = 0;
			for (int j = 0; j < cards.Length; j++)
				if (cards[j].value == straightSets[i][j])
					match++;

			if (match == 5)
			{
				bStraight = true;
				Debug.Log("Straight");
				if (showWin)
					Paytable.the.SetCurrentWin(Wins.WIN_STRAIGHT);
				if (autoHold)
					HoldAll(cards);
				break;
			}
		}

		// check full house
		if (bOnePair && bThree)
		{
			bFullHouse = true;
			Debug.Log("Full house");
			if (showWin)
				Paytable.the.SetCurrentWin(Wins.WIN_FULL_HOUSE);
			if (autoHold)
				HoldAll(cards);
		}

		// check straight flush
		if (bStraight && bFlush)
		{
			bStraightFlush = true;
			Debug.Log("Straight flush");
			if (showWin)
				Paytable.the.SetCurrentWin(Wins.WIN_STRAIGHT_FLUSH);
			if (autoHold)
				HoldAll(cards);
		}
	}
}
