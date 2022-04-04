#include "Deck.hpp"
#include "Pile.hpp"
#include <gtest/gtest.h>

TEST(DeckTest, isDeckGeneratedWith52UniqueCards) {
  auto cardsInDeck = Deck().getCards();
  auto lastElement = std::unique(cardsInDeck.begin(), cardsInDeck.end());
  ASSERT_EQ(cardsInDeck.size(), 52u);
  ASSERT_TRUE(lastElement == cardsInDeck.end());
}

TEST(PileTest, whenGameStartsOneCardShouldBeDrawnFromTheDeck) {
  Deck deck;
  Pile pile;
  pile.addCard(deck.pullCard());
  ASSERT_EQ(pile.getNumberOfCards(), 1u);
  ASSERT_EQ(deck.getCards().size(), 51u);
}