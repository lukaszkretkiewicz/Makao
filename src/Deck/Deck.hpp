#pragma once
#include "Card.hpp"
#include "GuiAdapter.hpp"
#include "IDeck.hpp"
#include "Node.hpp"
#include <iostream>
#include <memory>
#include <vector>

class IRandomizer;

class Deck : public IDeck, public visitor::Node
{
public:
  Deck();
  Deck(const IRandomizer &);
  Cards getCards() const override;
  Card pullCard() override;
  void accept(visitor::Visitor &) const;

private:
  Cards cards;

  void createCards();
};