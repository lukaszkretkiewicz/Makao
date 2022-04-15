#pragma once
#include <initializer_list>
#include <ostream>
enum class Color { Spades, Clubs, Hearts, Diamonds };

enum class Figure {
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

constexpr std::initializer_list<Figure> figures_all = {
    Figure::Two,   Figure::Three, Figure::Four, Figure::Five, Figure::Six,
    Figure::Seven, Figure::Eigth, Figure::Nine, Figure::Ten,  Figure::Jack,
    Figure::Queen, Figure::King,  Figure::Ace};

constexpr std::initializer_list<Color> colors_all = {
    Color::Clubs, Color::Spades, Color::Diamonds, Color::Hearts};

struct Card {
  Color color;
  Figure figure;
};

inline bool operator==(const Card &lhs, const Card &rhs) {
  return (lhs.color == rhs.color and lhs.figure == rhs.figure);
}

inline std::ostream &operator<<(std::ostream &os, const Card &card) {
  switch (card.figure) {
  case Figure::Ace:
    os << "Ace ";
    break;
  case Figure::Two:
    os << "Two ";
    break;
  case Figure::Three:
    os << "Three ";
    break;
  case Figure::Four:
    os << "Four ";
    break;
  case Figure::Five:
    os << "Five ";
    break;
  case Figure::Six:
    os << "Six ";
    break;
  case Figure::Seven:
    os << "Seven ";
    break;
  case Figure::Eigth:
    os << "Eight ";
    break;
  case Figure::Nine:
    os << "Nine ";
    break;
  case Figure::Ten:
    os << "Ten ";
    break;
  case Figure::Jack:
    os << "Jack ";
    break;
  case Figure::Queen:
    os << "Queen ";
    break;
  case Figure::King:
    os << "King ";
    break;
  default:
    os << "Wrong figure ";
    break;
  }

  switch (card.color) {
  case Color::Clubs:
    os << "Clubs" << std::endl;
    break;
  case Color::Spades:
    os << "Spades" << std::endl;
    break;
  case Color::Diamonds:
    os << "Diamonds" << std::endl;
    break;
  case Color::Hearts:
    os << "Hearts" << std::endl;
    break;
  default:
    os << "Wrong color" << std::endl;
    break;
  }
  return os;
}