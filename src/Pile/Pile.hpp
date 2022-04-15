#include "Deck.hpp"
#include "IPile.hpp"
#include <stack>
class Pile : public IPile {
private:
  std::stack<Card> cards;
  IDeck &deck;

public:
  Pile(IDeck &deck) : deck(deck) { addCard(deck.pullCard()); }
  void addCard(const Card &card) { cards.push(card); }
  size_t getNumberOfCards() const { return cards.size(); }
};