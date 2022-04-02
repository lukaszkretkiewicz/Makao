#include "Card.hpp"

class Deck
{
    std::vector<Card> cards;
    public:
    Deck()
    {
        for(auto figure : figures_all)
        {
            for(auto color : colors_all)
            cards.push_back(Card{color, figure});
        }
    }
    auto getCards() const
    {
        return cards;
    }
};