#include "Deck.hpp"
#include "PlayerMock.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
namespace tests {

using namespace ::testing;

// namespace {
// constexpr size_t twoPlayers{2};
// constexpr Card cardToPut{Color::Spades, Figure::Three};
// } // namespace

TEST(DeckTest, isDeckGeneratedWith52UniqueCards) {
  auto cardsInDeck = Deck().getCards();
  auto lastElement = std::unique(cardsInDeck.begin(), cardsInDeck.end());
  ASSERT_EQ(cardsInDeck.size(), 52u);
  ASSERT_TRUE(lastElement == cardsInDeck.end());
}

TEST(DeckTest, whenCardIsPulled_ThisCardShouldBeRemovedFromDeck) {
  Deck sut;
  const auto card = sut.pullCard();

  ASSERT_EQ(sut.getCards().size(), 51u);
  EXPECT_THAT(sut.getCards(), Not(Contains(card)));
}

// TEST(PlayerTest, playerCanPutSpecificCardOnPile) {
//   Deck deck;
//   Player player(deck);
//   Pile pile(deck);

//   pile += player.putCard(cardToPut);
//   ASSERT_EQ(2, pile.getNumberOfCards());
//   ASSERT_EQ(cardToPut, )
// }
} // namespace tests