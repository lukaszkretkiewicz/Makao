#pragma once
#include "Card.hpp"
#include <vector>

class IDeck {
public:
  virtual std::vector<Card> getCards() const = 0;
  virtual Card pullCard() = 0;
};