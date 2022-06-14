#pragma once
#include <iostream>
#include <map>
#include <vector>

namespace sfmlAdapter
{
enum class Entity
{ // any better idea?
  Deck,
  Pile,
  TwoSpades,
  ThreeSpades,
  FourSpades,
  FiveSpades,
  SixSpades,
  SevenSpades,
  EightSpades,
  NineSpades,
  TenSpades,
  JackSpades,
  QueenSpades,
  KingSpades,
  AceSpades,
  TwoClubs,
  ThreeClubs,
  FourClubs,
  FiveClubs,
  SixClubs,
  SevenClubs,
  EightClubs,
  NineClubs,
  TenClubs,
  JackClubs,
  QueenClubs,
  KingClubs,
  AceClubs,
  TwoHearts,
  ThreeHearts,
  FourHearts,
  FiveHearts,
  SixHearts,
  SevenHearts,
  EightHearts,
  NineHearts,
  TenHearts,
  JackHearts,
  QueenHearts,
  KingHearts,
  AceHearts,
  TwoDiamonds,
  ThreeDiamonds,
  FourDiamonds,
  FiveDiamonds,
  SixDiamonds,
  SevenDiamonds,
  EightDiamonds,
  NineDiamonds,
  TenDiamonds,
  JackDiamonds,
  QueenDiamonds,
  KingDiamonds,
  AceDiamonds
};

using Entities = std::vector<sfmlAdapter::Entity>;

constexpr std::initializer_list<Entity> entities_all = {
    Entity::Deck,          Entity::Pile,          Entity::TwoSpades,
    Entity::ThreeSpades,   Entity::FourSpades,    Entity::FiveSpades,
    Entity::SixSpades,     Entity::SevenSpades,   Entity::EightSpades,
    Entity::NineSpades,    Entity::TenSpades,     Entity::JackSpades,
    Entity::QueenSpades,   Entity::KingSpades,    Entity::AceSpades,
    Entity::TwoClubs,      Entity::ThreeClubs,    Entity::FourClubs,
    Entity::FiveClubs,     Entity::SixClubs,      Entity::SevenClubs,
    Entity::EightClubs,    Entity::NineClubs,     Entity::TenClubs,
    Entity::JackClubs,     Entity::QueenClubs,    Entity::KingClubs,
    Entity::AceClubs,      Entity::TwoHearts,     Entity::ThreeHearts,
    Entity::FourHearts,    Entity::FiveHearts,    Entity::SixHearts,
    Entity::SevenHearts,   Entity::EightHearts,   Entity::NineHearts,
    Entity::TenHearts,     Entity::JackHearts,    Entity::QueenHearts,
    Entity::KingHearts,    Entity::AceHearts,     Entity::TwoDiamonds,
    Entity::ThreeDiamonds, Entity::FourDiamonds,  Entity::FiveDiamonds,
    Entity::SixDiamonds,   Entity::SevenDiamonds, Entity::EightDiamonds,
    Entity::NineDiamonds,  Entity::TenDiamonds,   Entity::JackDiamonds,
    Entity::QueenDiamonds, Entity::KingDiamonds,  Entity::AceDiamonds};

inline std::ostream &operator<<(std::ostream &os, const Entity &card)
{
  switch (card)
  {
  case Entity::Deck:
    os << "Deck";
    break;
  case Entity::Pile:
    os << "Pile";
    break;
  case Entity::TwoSpades:
    os << "TwoSpades";
    break;
  case Entity::ThreeSpades:
    os << "ThreeSpades";
    break;
  case Entity::FourSpades:
    os << "FourSpades";
    break;
  case Entity::FiveSpades:
    os << "FiveSpades";
    break;
  case Entity::SixSpades:
    os << "SixSpades";
    break;
  case Entity::SevenSpades:
    os << "SevenSpades";
    break;
  case Entity::EightSpades:
    os << "EightSpades";
    break;
  case Entity::NineSpades:
    os << "NineSpades";
    break;
  case Entity::TenSpades:
    os << "TenSpades";
    break;
  case Entity::JackSpades:
    os << "JackSpades";
    break;
  case Entity::QueenSpades:
    os << "QueenSpades";
    break;
  case Entity::KingSpades:
    os << "KingSpades";
    break;
  case Entity::AceSpades:
    os << "AceSpades";
    break;
  case Entity::TwoClubs:
    os << "TwoClubs";
    break;
  case Entity::ThreeClubs:
    os << "ThreeClubs";
    break;
  case Entity::FourClubs:
    os << "FourClubs";
    break;
  case Entity::FiveClubs:
    os << "FiveClubs";
    break;
  case Entity::SixClubs:
    os << "SixClubs";
    break;
  case Entity::SevenClubs:
    os << "SevenClubs";
    break;
  case Entity::EightClubs:
    os << "EightClubs";
    break;
  case Entity::NineClubs:
    os << "NineClubs";
    break;
  case Entity::TenClubs:
    os << "TenClubs";
    break;
  case Entity::JackClubs:
    os << "JackClubs";
    break;
  case Entity::QueenClubs:
    os << "QueenClubs";
    break;
  case Entity::KingClubs:
    os << "KingClubs";
    break;
  case Entity::AceClubs:
    os << "AceClubs";
    break;
  case Entity::TwoHearts:
    os << "TwoHearts";
    break;
  case Entity::ThreeHearts:
    os << "ThreeHearts";
    break;
  case Entity::FourHearts:
    os << "FourHearts";
    break;
  case Entity::FiveHearts:
    os << "FiveHearts";
    break;
  case Entity::SixHearts:
    os << "SixHearts";
    break;
  case Entity::SevenHearts:
    os << "SevenHearts";
    break;
  case Entity::EightHearts:
    os << "EightHearts";
    break;
  case Entity::NineHearts:
    os << "NineHearts";
    break;
  case Entity::TenHearts:
    os << "TenHearts";
    break;
  case Entity::JackHearts:
    os << "JackHearts";
    break;
  case Entity::QueenHearts:
    os << "QueenHearts";
    break;
  case Entity::KingHearts:
    os << "KingHearts";
    break;
  case Entity::AceHearts:
    os << "AceHearts";
    break;
  case Entity::TwoDiamonds:
    os << "TwoDiamonds";
    break;
  case Entity::ThreeDiamonds:
    os << "ThreeDiamonds";
    break;
  case Entity::FourDiamonds:
    os << "FourDiamonds";
    break;
  case Entity::FiveDiamonds:
    os << "FiveDiamonds";
    break;
  case Entity::SixDiamonds:
    os << "SixDiamonds";
    break;
  case Entity::SevenDiamonds:
    os << "SevenDiamonds";
    break;
  case Entity::EightDiamonds:
    os << "EightDiamonds";
    break;
  case Entity::NineDiamonds:
    os << "NineDiamonds";
    break;
  case Entity::TenDiamonds:
    os << "TenDiamonds";
    break;
  case Entity::JackDiamonds:
    os << "JackDiamonds";
    break;
  case Entity::QueenDiamonds:
    os << "QueenDiamonds";
    break;
  case Entity::KingDiamonds:
    os << "KingDiamonds";
    break;
  case Entity::AceDiamonds:
    os << "AceDiamonds";
    break;
  }
  return os;
}

const std::map<Entity, std::string> hashedTextureNames{
    {Entity::Deck, "cardBack"},           {Entity::Pile, "cardBack"},
    {Entity::TwoSpades, "spades2"},       {Entity::ThreeSpades, "spades3"},
    {Entity::FourSpades, "spades4"},      {Entity::FiveSpades, "spades5"},
    {Entity::SixSpades, "spades6"},       {Entity::SevenSpades, "spades7"},
    {Entity::EightSpades, "spades8"},     {Entity::NineSpades, "spades9"},
    {Entity::TenSpades, "spades10"},      {Entity::JackSpades, "spades11"},
    {Entity::QueenSpades, "spades12"},    {Entity::KingSpades, "spades13"},
    {Entity::AceSpades, "spades1"},       {Entity::TwoClubs, "clubs2"},
    {Entity::ThreeClubs, "clubs3"},       {Entity::FourClubs, "clubs4"},
    {Entity::FiveClubs, "clubs5"},        {Entity::SixClubs, "clubs6"},
    {Entity::SevenClubs, "clubs7"},       {Entity::EightClubs, "clubs8"},
    {Entity::NineClubs, "clubs9"},        {Entity::TenClubs, "clubs10"},
    {Entity::JackClubs, "clubs11"},       {Entity::QueenClubs, "clubs12"},
    {Entity::KingClubs, "clubs13"},       {Entity::AceClubs, "clubs1"},
    {Entity::TwoHearts, "hearts2"},       {Entity::ThreeHearts, "hearts3"},
    {Entity::FourHearts, "hearts4"},      {Entity::FiveHearts, "hearts5"},
    {Entity::SixHearts, "hearts6"},       {Entity::SevenHearts, "hearts7"},
    {Entity::EightHearts, "hearts8"},     {Entity::NineHearts, "hearts9"},
    {Entity::TenHearts, "hearts10"},      {Entity::JackHearts, "hearts11"},
    {Entity::QueenHearts, "hearts12"},    {Entity::KingHearts, "hearts13"},
    {Entity::AceHearts, "hearts1"},       {Entity::TwoDiamonds, "diamonds2"},
    {Entity::ThreeDiamonds, "diamonds3"}, {Entity::FourDiamonds, "diamonds4"},
    {Entity::FiveDiamonds, "diamonds5"},  {Entity::SixDiamonds, "diamonds6"},
    {Entity::SevenDiamonds, "diamonds7"}, {Entity::EightDiamonds, "diamonds8"},
    {Entity::NineDiamonds, "diamonds9"},  {Entity::TenDiamonds, "diamonds10"},
    {Entity::JackDiamonds, "diamonds11"}, {Entity::QueenDiamonds, "diamonds12"},
    {Entity::KingDiamonds, "diamonds13"}, {Entity::AceDiamonds, "diamonds1"}};
} // namespace sfmlAdapter