#include "Randomizer.hpp"
#include <random>

Cards Randomizer::shuffleCards(const Cards &cards) const
{
  Cards result = cards;
  auto rng = std::default_random_engine{std::random_device{}()};
  std::shuffle(result.begin(), result.end(), rng);
  return result;
}