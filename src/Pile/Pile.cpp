#include "Pile.hpp"

Pile::Pile(IDeck &deck) : deck(deck) { addCard(deck.pullCard()); }

void Pile::addCard(const Card &card) { cards.push(card); }
size_t Pile::getNumberOfCards() const { return cards.size(); }