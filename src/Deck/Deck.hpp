#include "Card.hpp"
#include <vector>
class Deck {
  std::vector<Card> cards;

public:
  Deck() {
    for (auto figure : figures_all) {
      for (auto color : colors_all)
        cards.push_back(Card{color, figure});
    }
  }

  auto getCards() const { return cards; }

  Card pullCard() {
    auto result = cards.back();
    cards.pop_back();
    return result;
  }
};