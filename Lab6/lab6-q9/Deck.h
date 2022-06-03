#ifndef Deck_H
#define Deck_H

#include "Card.h"
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

class Deck {

    private:
        //a vector of Card objects are called deck
        vector <Card> deck;
        int cardnum;

    public:
        //constructor
        Deck();

        int get_cardnum();
        Card get_card();
        void shuffle();

};

#endif