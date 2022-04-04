#include "Card.hpp"
#include <stack>

class Pile {
private:
  std::stack<Card> cards;

public:
  void addCard(const Card &card) { cards.push(card); }
  size_t getNumberOfCards() const { return cards.size(); }
};