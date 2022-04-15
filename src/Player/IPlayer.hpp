#pragma once
#include "Card.hpp"
#include <vector>

class IPlayer {
public:
  virtual std::vector<Card> getCards() const = 0;

  virtual void addCard(const Card &card) = 0;
};