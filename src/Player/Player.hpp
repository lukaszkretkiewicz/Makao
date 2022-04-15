#include "IDeck.hpp"
#include "IPlayer.hpp"

class Player : IPlayer {
  std::vector<Card> cardsInHand;

public:
  Player() = default;
  Player(IDeck &deck) {
    for (int i = 0; i < 5; i++)
      cardsInHand.push_back(deck.pullCard());
  }
  virtual std::vector<Card> getCards() const { return cardsInHand; }

  void addCard(const Card &card) { cardsInHand.push_back(card); }
};