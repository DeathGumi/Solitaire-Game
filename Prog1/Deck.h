//    Nam Ton
//    CECS 325-01
//    Prog 1 - Fibonacci Solitaire
//    01/12/2023
//
//    I certify that this program is my own original work. I did not copy any part of this program 
//    from any other source. I further certify that I typed each and every line of code in this program.


#ifndef DECK_H
#define DECK_H

#include "Card.h"

const int DECK_SIZE = 52;
const int RANK_SIZE = 13;
const int SUIT_SIZE = 4;

class Deck {
public:
    Deck();
    void resetDeck();
    Card deal();
    void shuffle();
    bool isEmpty();
    void show();

private:
    Card deck[DECK_SIZE];
    int cardsUsed;
};

#endif 