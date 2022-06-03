#pragma once
#include "Card.hpp"

class IPile
{
public:
  virtual void addCard(const Card &card) = 0;
  virtual size_t getNumberOfCards() const = 0;
};