#pragma once
#include "Deck.hpp"

class IRandomizer {
public:
  virtual ~IRandomizer() = default;
  virtual Cards shuffleCards(const Cards &) const = 0;
};