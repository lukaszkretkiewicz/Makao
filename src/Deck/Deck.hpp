#include "Card.hpp"

class Deck
{
    std::vector<Card> cards;
    public:
    Deck()
    {

    }
    auto getCards() const
    {
        return cards;
    }
};