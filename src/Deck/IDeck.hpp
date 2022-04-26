#pragma once
#include "Card.hpp"
#include <vector>

class IDeck {
public:
  virtual Cards getCards() const = 0;
  virtual Card pullCard() = 0;
};