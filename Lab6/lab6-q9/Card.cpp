#include "Card.h"

using namespace std;

//constructor
Card::Card(string rank, string suit) {
    this->rank = rank;
    this->suit = suit;
}

//public function

string Card::print_card() {
    return rank + " of " + suit;
}
