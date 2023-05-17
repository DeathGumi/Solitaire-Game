//    Nam Ton
//    CECS 325-01
//    Prog 1 - Fibonacci Solitaire
//    01/12/2023
//
//    I certify that this program is my own original work. I did not copy any part of this program 
//    from any other source. I further certify that I typed each and every line of code in this program.

#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>


using namespace std;

class Card {
public:
    Card();
    Card(string r, char s);
    void setCard(string r, char s);
    int getValue();
    void show();

private:
    string rank;
    char suit;
};

#endif 