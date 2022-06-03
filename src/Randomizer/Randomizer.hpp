#pragma once
#include "IRandomizer.hpp"
#include <algorithm>
#include <iostream>

class Randomizer : public IRandomizer
{
public:
  Cards shuffleCards(const Cards &cards) const override;
};