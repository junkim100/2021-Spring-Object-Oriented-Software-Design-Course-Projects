/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to make a card dealer program that allows user to draw random cards from a deck using classes
*/

#include "Deck.h"
#include <iostream>

using namespace std;

int main() {

    cout << "Card Dealer" << endl;

    while (true) {

        //create a new Deck object
        Deck d1;

        //shuffle the cards vector of d1 object
        cout << "\nI have shuffled a deck of " << d1.get_cardnum() << " cards. " << endl;
        d1.shuffle();

        //user input for number of selection
        int num;
        cout << "\nHow many cards would you like?: ";
        cin >> num;

        //gives error and ends program if user wants to draw more cards than currently available cards
        if (num > d1.get_cardnum()) {
            cout << "You cant draw more than " << d1.get_cardnum() << " cards. " << endl;
            break;
        }

        //prints cards
        cout << "\nHere are your cards: " << endl;
        for (int i = 0; i < num; i++) {
            cout << d1.get_card().print_card() << endl;
        }

        cout << "\nThere are " << d1.get_cardnum() << " cards left in the deck. " << endl << "\nGood Luck!" << endl;
        
        break;

    }

}
