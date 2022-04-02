#include <gtest/gtest.h>
#include "Deck.hpp"
#include "Pile.hpp"

TEST(DeckTest, isDeckGeneratedWith52ExclusiveCards)
{
  auto cardsInDeck = Deck().getCards();
  auto last = std::unique(cardsInDeck.begin(), cardsInDeck.end());
  ASSERT_EQ(cardsInDeck.size(), 52u);
  ASSERT_TRUE(last == cardsInDeck.end());
}
