#include "Deck.hpp"
#include "IPile.hpp"
#include <stack>
class Pile : public IPile
{
public:
  Pile(IDeck &deck);
  void addCard(const Card &card);
  size_t getNumberOfCards() const;

private:
  std::stack<Card> cards;
  IDeck &deck;
};