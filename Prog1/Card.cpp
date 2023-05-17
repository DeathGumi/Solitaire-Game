//    Nam Ton
//    CECS 325-01
//    Prog 1 - Fibonacci Solitaire
//    01/12/2023
//
//    I certify that this program is my own original work. I did not copy any part of this program 
//    from any other source. I further certify that I typed each and every line of code in this program.

#include "Card.h"

Card::Card() {
    rank = "A";
    suit = 'S';
}

Card::Card(string r, char s) {
    rank = r;
    suit = s;
}

void Card::setCard(string r, char s) {
    rank = r;
    suit = s;
}

int Card::getValue() {
    if (rank == "A") {
        return 1;
    }
    else if (rank >= "2" && rank <= "9") {
        return stoi(rank);
    }
    else {
        return 10;
    }
}

void Card::show() {
    cout << rank << suit << " ";
}