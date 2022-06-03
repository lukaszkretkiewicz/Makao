#include "IDeck.hpp"
#include "IPlayer.hpp"

class Player : IPlayer
{

public:
  Player();

  Player(IDeck &);

  Cards getCards() const override;

  void addCard(const Card &card) override;

private:
  Cards cardsInHand;
};