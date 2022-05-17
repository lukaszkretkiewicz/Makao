#include "Deck.hpp"
#include "PlayerMock.hpp"
#include "RandomizerMock.hpp"
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

TEST(DeckTest, deckShouldBeRandomizedByExternalRandomizer) {
  RandomizerMock randomizer;
  EXPECT_CALL(randomizer, shuffleCards(_)).Times(1);
  Deck sut(randomizer);
}

struct CardTestParam {
  Card card;
  const char *expectedString;
};

class CardPrintingTest : public TestWithParam<CardTestParam> {};

TEST_P(CardPrintingTest, print) {
  const auto [card, expectedString] = GetParam();

  std::stringstream stream;
  stream << card;
  std::string result = stream.str();

  ASSERT_STREQ(expectedString, result.c_str());
}

INSTANTIATE_TEST_SUITE_P(
    CardPrintingTest, CardPrintingTest,
    Values(
        CardTestParam{Card{Color::Clubs, Figure::Ace}, "Ace Clubs\n"},
        CardTestParam{Card{Color::Clubs, Figure::Two}, "Two Clubs\n"},
        CardTestParam{Card{Color::Clubs, Figure::Three}, "Three Clubs\n"},
        CardTestParam{Card{Color::Diamonds, Figure::Four}, "Four Diamonds\n"},
        CardTestParam{Card{Color::Diamonds, Figure::Five}, "Five Diamonds\n"},
        CardTestParam{Card{Color::Diamonds, Figure::Six}, "Six Diamonds\n"},
        CardTestParam{Card{Color::Hearts, Figure::Seven}, "Seven Hearts\n"},
        CardTestParam{Card{Color::Hearts, Figure::Eight}, "Eight Hearts\n"},
        CardTestParam{Card{Color::Hearts, Figure::Nine}, "Nine Hearts\n"},
        CardTestParam{Card{Color::Spades, Figure::Ten}, "Ten Spades\n"},
        CardTestParam{Card{Color::Spades, Figure::Jack}, "Jack Spades\n"},
        CardTestParam{Card{Color::Spades, Figure::Queen}, "Queen Spades\n"},
        CardTestParam{Card{Color::Spades, Figure::King}, "King Spades\n"}));

// TEST(PlayerTest, playerCanPutSpecificCardOnPile) {
//   Deck deck;
//   Player player(deck);
//   Pile pile(deck);

//   pile += player.putCard(cardToPut);
//   ASSERT_EQ(2, pile.getNumberOfCards());
//   ASSERT_EQ(cardToPut, )
// }
} // namespace tests