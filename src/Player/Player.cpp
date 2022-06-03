#include "Player.hpp"

Player::Player() = default;

Player::Player(IDeck &deck)
{
  for (int i = 0; i < 5; i++)
    cardsInHand.push_back(deck.pullCard());
}

Cards Player::getCards() const { return cardsInHand; }

void Player::addCard(const Card &card) { cardsInHand.push_back(card); }