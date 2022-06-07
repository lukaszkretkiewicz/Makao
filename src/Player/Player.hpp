#include "IDeck.hpp"
#include "IPlayer.hpp"
#include "Node.hpp"

class Player : public IPlayer, public visitor::Node
{
public:
  Player();

  Player(IDeck &);

  Cards getCards() const override;

  void addCard(const Card &card) override;

  void setupCards(IDeck &) override;

  void accept(visitor::Visitor &) const override;

private:
  Cards cardsInHand;
};