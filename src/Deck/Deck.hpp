#pragma once
#include "Card.hpp"
#include "IDeck.hpp"
#include <iostream>
#include <vector>

class Deck : public IDeck {
  std::vector<Card> cards;

  void createCards() {
    for (auto figure : figures_all) {
      for (auto color : colors_all)
        cards.push_back(Card{color, figure});
    }
  }

public:
  Deck() { createCards(); }

  std::vector<Card> getCards() const override { return cards; }

  Card pullCard() override {
    auto result = cards.back();
    cards.pop_back();
    return result;
  }
};