#pragma once
enum class Color { Spades, Clubs, Hearts, Diamonds };

enum class Figures {
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eigth,
  Nine,
  Ten,
  Jack,
  Queen,
  King,
  Ace
};

struct Card {
  Color color;
  Figures figure;
};

bool operator==(const Card &lhs, const Card &rhs) {
  return lhs.color == rhs.color and rhs.figure == rhs.figure;
}