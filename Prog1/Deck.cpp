//    Nam Ton
//    CECS 325-01
//    Prog 1 - Fibonacci Solitaire
//    01/12/2023
//
//    I certify that this program is my own original work. I did not copy any part of this program 
//    from any other source. I further certify that I typed each and every line of code in this program.

#include "Deck.h"
#include <cstdlib>
#include <iostream>

Deck::Deck() {
    resetDeck();
}

void Deck::resetDeck() {
    string ranks[RANK_SIZE] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    char suits[SUIT_SIZE] = {'S', 'H', 'D', 'C'};
    int index = 0;
    for (int i = 0; i < SUIT_SIZE; i++) {
        for (int j = 0; j < RANK_SIZE; j++) {
            deck[index].setCard(ranks[j], suits[i]);
            index++;
        }
    }
    cardsUsed = 0;
}
Card Deck::deal() {
    if (cardsUsed == DECK_SIZE) {
        // No more cards in the deck
        return Card("ERROR", 'E');
    }
    cardsUsed++;
    return deck[cardsUsed - 1];
}

void Deck::shuffle() {
    for (int i = 0; i < DECK_SIZE; i++) {
        int j = rand() % DECK_SIZE;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
    cardsUsed = 0;
}

bool Deck::isEmpty() {
    return cardsUsed == DECK_SIZE;
}

void Deck::show() {
    for (int i = 0; i < DECK_SIZE; i++) {
        deck[i].show();
        if ((i + 1) % RANK_SIZE == 0) {
            cout << endl;
        }
    }
}