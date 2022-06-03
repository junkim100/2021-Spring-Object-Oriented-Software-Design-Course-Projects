#include "Deck.h"

using namespace std;

//constructor
Deck::Deck() {

    vector<string> ranks = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    vector<string> suits = {"Clubs", "Diamonds", "Hearts", "Spades"};

    //stores all possible kinds of card to the deck vector
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            deck.push_back( Card(ranks[i], suits[j]) );
        }
    }

}

//public function

int Deck::get_cardnum() {
    return deck.size();
}

//return a carc object that contains the last card of the deck then erase that card from the deck
Card Deck::get_card() {
    Card card = deck.back();
    deck.pop_back();
    return card;
}

//shuffles the deck vector in random order
void Deck::shuffle() {
    //without this line the random order will always be the same
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(begin(deck), end(deck), default_random_engine(seed));
}
