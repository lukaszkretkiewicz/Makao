#pragma once
#include "Card.hpp"
#include <vector>

class IPlayer
{
public:
  virtual Cards getCards() const = 0;

  virtual void addCard(const Card &card) = 0;
};