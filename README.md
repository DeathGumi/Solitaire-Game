# Solitaire-Game
Game that involves both Solitaire and the Fibonacci Sequence


Here are the rules:
1) Take the top card from the deck and place it face up on the table.
2) The Sum is now the value of that card (Ace = 1, 2 = 2, … 10 = 10, Jack = 10, Queen = 10, King = 10)
3) If the Sum is a Fibonacci number, discard that pile, and start over at instruction #1
4) If the Sum is not Fibonacci, take the next card from the top of the deck and place it on top of the card
pile on the table.
5) The Sum is now the sum of all cards in the pile on the table.
6) Go to instruction #3.
Continue to play the game, keeping track of how many piles you have created that are Fibonacci.
If the last card from the deck gives you a Fibonacci pile, then you win! Write the word “Winner” on the screen and show how many Fibonacci piles there were.
If the last card from the deck does not give you a Fibonacci pile, then you lose. Write the word “Loser” on the screen.


Some methods that were used to create the game/functions used 
public class Deck:
public Deck( ) // constructor which creates a deck of 52 cards. Ace of Spades on top, followed by the
rest of the spades in order, followed by Hearts, Diamonds and Clubs.
public void resetDeck(); // reset the deck so it looks like a new deck.
public Card deal( ) // deal a card from the top of the deck.
public void shuffle( ) // shuffle the cards in the deck.
public bool isEmpty( ) // true is deck is empty, false if the deck is not empty
public void show( ); // show all the cards in the deck: 13 columns and 4 rows.


public class Card:
public Card( ) // create a “default” card
public Card( char r, char s ) // constructor to create a card, setting the rank and suit
public void setCard( char r, char s) //set existing card to new values
public int getValue( ) // return the point value of the card. Ace = 1, 2 thru 10, Jack = 10, Queen = 10,
King = 10
public void show( ) // show the card using 2 fields… Ace of Spade:AS, Ten of Diamond:10D, Queen
of Heart:QH, Three of Club:3C. (If you want to get fancy, you can use these symbols for the suit ♠, ♣, ♥, ♦)

Menu that will show up when ran:

Welcome to Fibonacci Solitaire!
1) Create New Deck
2) Shuffle Deck
3) Display Deck
4) Play Fibo Solitaire
5) Win Fibo Solitaire
6) Exit

What each of the menu does
Create New Deck will create an unshuffled deck in the following order: Spades, Hearts, Diamonds, Clubs, Ace, 2, 3, …, 10, Jack, Queen, King
Display Deck will display all cards in a grid: 13 columns by 4 rows.
Shuffle Deck will randomly shuffle all cards in the deck.
Play Fibo Solitaire will play the game 
Win Fibo Solitaire will automatically continue to play until the person wins and also keep track of how many games were play to get the win
Exit will exit the program.



