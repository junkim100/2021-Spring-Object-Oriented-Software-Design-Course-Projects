#ifndef Card_H
#define Card_H

#include <string>

using namespace std;

class Card {

    private:
        string rank, suit;

    public:
        //constructor
        Card(string rank = "", string suit = "");

        string print_card();

};

#endif