#include "Randomizer.hpp"

Cards Randomizer::shuffleCards(const Cards &cards) const {
  Cards result = cards;
  std::random_shuffle(result.begin(), result.end());
  return result;
}