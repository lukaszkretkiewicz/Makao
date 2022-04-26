#include "Randomizer.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace ::testing;

Cards createCards() {
  Cards cards{};
  for (auto figure : figures_all) {
    for (auto color : colors_all)
      cards.push_back(Card{color, figure});
  }
  return cards;
}

TEST(RandomizerTest, shufflingShouldChangeCardsOrder) {
  Randomizer sut;
  auto cardsToShuffle = createCards();
  auto shuffled = sut.shuffleCards(cardsToShuffle);
  EXPECT_THAT(shuffled, UnorderedElementsAreArray(cardsToShuffle));
  EXPECT_THAT(shuffled, Not(ElementsAreArray(cardsToShuffle)));
}