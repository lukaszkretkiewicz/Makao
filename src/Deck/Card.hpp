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

constexpr std::initializer_list<Figures> figures_all = {
    Figures::Two,   Figures::Three, Figures::Four, Figures::Five, Figures::Six,
    Figures::Seven, Figures::Eigth, Figures::Nine, Figures::Ten,  Figures::Jack,
    Figures::Queen, Figures::King,  Figures::Ace};

constexpr std::initializer_list<Color> colors_all = {
    Color::Clubs, Color::Spades, Color::Diamonds, Color::Hearts};

struct Card {
  Color color;
  Figures figure;
};

bool operator==(const Card &lhs, const Card &rhs) {
  return lhs.color == rhs.color and rhs.figure == rhs.figure;
}