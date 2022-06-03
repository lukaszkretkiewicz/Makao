#include "Deck.hpp"
#include "IRandomizer.hpp"

Deck::Deck() { createCards(); }

Deck::Deck(const IRandomizer &randomizer)
{
  createCards();
  randomizer.shuffleCards(cards);
}

Cards Deck::getCards() const { return cards; }

Card Deck::pullCard()
{
  auto result = cards.back();
  cards.pop_back();
  return result;
}

void Deck::createCards()
{
  for (auto figure : figures_all)
  {
    for (auto color : colors_all)
      cards.push_back(Card{color, figure});
  }
}