#include "DeckMock.hpp"
#include "Pile.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
constexpr Card cardToReturn{};
}

TEST(PileTest, whenPileIsCreated_OneCardShouldBeDrawnFromTheDeck) {
  testing::StrictMock<DeckMock> deckMock;
  EXPECT_CALL(deckMock, pullCard()).WillOnce(testing::Return(cardToReturn));
  Pile pile(deckMock);
  ASSERT_EQ(pile.getNumberOfCards(), 1u);
}