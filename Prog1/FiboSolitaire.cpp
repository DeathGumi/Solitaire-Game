//    Nam Ton
//    CECS 325-01
//    Prog 1 - Fibonacci Solitaire
//    01/12/2023
//
//    I certify that this program is my own original work. I did not copy any part of this program 
//    from any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include "Card.h"
#include "Deck.h"

using namespace std;


bool isFibo(int n) {
    int a = 1, b = 1, c = 1;
    if(n==0 || n==1)
        return true;
    for(int i = 2; i <=n; i++)
    {
        a=b;
        b=c;
        c=a+b;
        if(n==c)
            return true;
    }
    return false;
}

// Main function
int main() {
    srand(time(0));

    Deck deck;
    int gameCount = 0;
    int pileCount = 0;
    int sum = 0;

    bool winner = false;



    // Choice menu
    //After playing a game till a win or lose show menu again otherwise stay in playing the game
    while (true) {
        cout << "Welcome to Fibonacci Solitaire!" << endl;
        cout << "1) Create New Deck" << endl;
        cout << "2) Shuffle Deck" << endl;
        cout << "3) Display Deck" << endl;
        cout << "4) Play Fibo Solitaire" << endl;
        cout << "5) Win Fibo Solitaire" << endl;
        cout << "6) Exit" << endl;

        
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                deck.resetDeck();
                break;

            case 2:
                deck.shuffle();
                break;


            case 3:
                deck.show();
                break;



            case 4:
            {
                gameCount = 0;
                sum = 0;
                pileCount = 0;
                deck.resetDeck();
                deck.shuffle();
                

                while (!deck.isEmpty()) {
                    Card card = deck.deal();
                    sum += card.getValue();
                    cout << " ";
                    card.show();
                    

                    if (isFibo(sum) == true){
                        cout << "Fibo: " << sum << endl;
                        pileCount++; 
                        sum = 0;
                    }
                }
                    if (isFibo(sum) == true) {
                        
                        cout << "Winner in " << pileCount <<" piles" << endl;
                        break;
                    }
                    else {

                        cout << "Not Fibo " << sum << endl;

                    
                        cout << "Loser in " << ++pileCount << " piles" << endl << endl;
                    }
                
                gameCount++;
                break;
                
            
            }


            //Win Fibo Solitaire automatically continue to play until win and also keeps track of how many games played till win
            //When acquired a fibonacci pile print out the value(Fibonacci number) and start over on next line
            //Cannot lose can only win so dont check for lose If the last card from the deck gives you a Fibonacci pile, then you win! Write the word “Winner” on the screen and show how many Fibonacci piles there were
            //implement a counter to keep track of how many games played till win along with stopping menu from showing again
            
            case 5:
            {
                gameCount = 0;
                winner = false;


                while (winner == false){

                deck.resetDeck();
                deck.shuffle();
                sum = 0;
                pileCount = 0;

                while (!deck.isEmpty()) {
                    Card card = deck.deal();
                    sum += card.getValue();
                    cout << " ";
                    card.show();
                    

                    if (isFibo(sum) == true){
                        cout << "Fibo: " << sum << endl;
                        pileCount++; 
                        sum = 0;
                    }
                }
                    if (isFibo(sum) == true) {
                        
                        cout << "Winner in " << pileCount <<" piles" << endl << endl;
                        winner = true;

                        cout << "Games played " << ++gameCount << endl;
                        
                        break;
                    }
                    else {

                        cout << "Not Fibo: " << sum << endl;

                    
                        cout << "Loser in " << ++pileCount << " piles" << endl;
                    }
                
                gameCount++;
            }
                break;
                
            
            }
                

            case 6:
                cout << "Goodbye!" << endl;
                exit(0);
                break;
        
    }
}
}     