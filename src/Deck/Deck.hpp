#pragma once
#include "Card.hpp"
#include "IDeck.hpp"
// #include "IRandomizer.hpp"
#include <iostream>
#include <memory>
#include <vector>

class IRandomizer;

class Deck : public IDeck {
  Cards cards;

  void createCards();

public:
  Deck();

  Deck(const IRandomizer &);

  Cards getCards() const override;

  Card pullCard() override;
};