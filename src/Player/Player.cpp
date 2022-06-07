#include "Player.hpp"

Player::Player() = default;

Player::Player(IDeck &deck) { setupCards(deck); }

Cards Player::getCards() const { return cardsInHand; }

void Player::addCard(const Card &card) { cardsInHand.push_back(card); }

void Player::setupCards(IDeck &deck)
{
  for (int i = 0; i < 5; i++)
    cardsInHand.push_back(deck.pullCard());
}

void Player::accept(visitor::Visitor &visitor) const
{
  visitor.visitPlayer(*this);
}