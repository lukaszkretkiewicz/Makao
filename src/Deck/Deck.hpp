#pragma once
#include "Card.hpp"
#include "GuiAdapter.hpp"
#include "IDeck.hpp"
#include <iostream>
#include <memory>
#include <vector>
class IRandomizer;

class Deck : public IDeck
{
public:
  Deck();
  Deck(const IRandomizer &);
  Cards getCards() const override;
  Card pullCard() override;

private:
  Cards cards;

  void createCards();
};