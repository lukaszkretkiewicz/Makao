#include "DeckMock.hpp"
#include "Player.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
constexpr Card cardToReturn{};
}

TEST(PlayerTest, whenPlayerIsCreatedWithDeckShouldGetFiveCards) {
  testing::StrictMock<DeckMock> deckMock;
  EXPECT_CALL(deckMock, pullCard())
      .WillRepeatedly(testing::Return(cardToReturn));
  Player sut(deckMock);
  ASSERT_EQ(sut.getCards().size(), 5u);
}