#pragma once
#include "IRandomizer.hpp"
#include <algorithm>
#include <iostream>

class Randomizer : public IRandomizer {
public:
  Cards shuffleCards(const Cards &cards) const override {
    Cards result = cards;
    std::random_shuffle(result.begin(), result.end());
    return result;
  }
};