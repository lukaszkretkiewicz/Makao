#include "SpriteManager.hpp"
#include "Card.hpp"
#include "IPlayer.hpp"
#include <map>

namespace sfmlAdapter
{
SpriteManager::SpriteManager(const std::unique_ptr<sf::RenderWindow> &window)
    : window(window)
{
  textureManager.loadTextures();
}

sf::Sprite &SpriteManager::get(const Entity &object)
{
  return sprites.at(object);
}

void SpriteManager::visitDeck(const IDeck &)
{
  auto &deckSprite = sprites.at(Entity::Deck);
  deckSprite.setOrigin(deckSprite.getLocalBounds().width / 2,
                       deckSprite.getLocalBounds().height / 2);
  deckSprite.setPosition(window->getSize().x / 2 - 100,
                         window->getSize().y / 2);
  entitiesToDrawDuringThisTick.push_back(Entity::Deck);
}

void SpriteManager::visitPlayer(const IPlayer &player)
{
  // 1. znajdź miejsce na karty
  // 2. pobierz potrzebne sprity dla kart
  // 3.
  int i = 0;
  for (const auto &card : player.getCards())
  {
    const auto &sfmlEntity = convertCardStructToSpriteEnum(card);
    auto &cardSprite = sprites.at(sfmlEntity);
    cardSprite.setOrigin(cardSprite.getLocalBounds().width / 2,
                         cardSprite.getLocalBounds().height / 2);
    cardSprite.setPosition(window->getSize().x / 2 + i,
                           window->getSize().y / 2 + 220);
    i += 25;
    entitiesToDrawDuringThisTick.push_back(sfmlEntity);
  }
}

sf::Sprite SpriteManager::createSpriteForMap(const Entity &object)
{
  std::string textureToLoad = hashedTextureNames.at(object);
  sf::Sprite sprite{textureManager.get(textureToLoad)};
  return sprite;
}

void SpriteManager::buildSprites()
{
  for (const auto &entity : entities_all)
  {
    sprites.emplace(entity, createSpriteForMap(entity));
  }
}

void SpriteManager::resetEntitiesToDraw()
{
  entitiesToDrawDuringThisTick.clear();
}

Entities SpriteManager::getEntitiesToDraw() const
{
  return entitiesToDrawDuringThisTick;
}

Entity SpriteManager::convertCardStructToSpriteEnum(const Card &card)
{
  Entity result;
  switch (card.color)
  {
  case Color::Spades:
    switch (card.figure)
    {
    case Figure::Two:
      result = Entity::TwoSpades;
      break;
    case Figure::Three:
      result = Entity::ThreeSpades;
      break;
    case Figure::Four:
      result = Entity::FourSpades;
      break;
    case Figure::Five:
      result = Entity::FiveSpades;
      break;
    case Figure::Six:
      result = Entity::SixSpades;
      break;
    case Figure::Seven:
      result = Entity::SevenSpades;
      break;
    case Figure::Eight:
      result = Entity::EightSpades;
      break;
    case Figure::Nine:
      result = Entity::NineSpades;
      break;
    case Figure::Ten:
      result = Entity::TenSpades;
      break;
    case Figure::Jack:
      result = Entity::JackSpades;
      break;
    case Figure::Queen:
      result = Entity::QueenSpades;
      break;
    case Figure::King:
      result = Entity::KingSpades;
      break;
    case Figure::Ace:
      result = Entity::AceSpades;
      break;
    }
    break;
  case Color::Clubs:
    switch (card.figure)
    {
    case Figure::Two:
      result = Entity::TwoClubs;
      break;
    case Figure::Three:
      result = Entity::ThreeClubs;
      break;
    case Figure::Four:
      result = Entity::FourClubs;
      break;
    case Figure::Five:
      result = Entity::FiveClubs;
      break;
    case Figure::Six:
      result = Entity::SixClubs;
      break;
    case Figure::Seven:
      result = Entity::SevenClubs;
      break;
    case Figure::Eight:
      result = Entity::EightClubs;
      break;
    case Figure::Nine:
      result = Entity::NineClubs;
      break;
    case Figure::Ten:
      result = Entity::TenClubs;
      break;
    case Figure::Jack:
      result = Entity::JackClubs;
      break;
    case Figure::Queen:
      result = Entity::QueenClubs;
      break;
    case Figure::King:
      result = Entity::KingClubs;
      break;
    case Figure::Ace:
      result = Entity::AceClubs;
      break;
    }
    break;
  case Color::Hearts:
    switch (card.figure)
    {
    case Figure::Two:
      result = Entity::TwoHearts;
      break;
    case Figure::Three:
      result = Entity::ThreeHearts;
      break;
    case Figure::Four:
      result = Entity::FourHearts;
      break;
    case Figure::Five:
      result = Entity::FiveHearts;
      break;
    case Figure::Six:
      result = Entity::SixHearts;
      break;
    case Figure::Seven:
      result = Entity::SevenHearts;
      break;
    case Figure::Eight:
      result = Entity::EightHearts;
      break;
    case Figure::Nine:
      result = Entity::NineHearts;
      break;
    case Figure::Ten:
      result = Entity::TenHearts;
      break;
    case Figure::Jack:
      result = Entity::JackHearts;
      break;
    case Figure::Queen:
      result = Entity::QueenHearts;
      break;
    case Figure::King:
      result = Entity::KingHearts;
      break;
    case Figure::Ace:
      result = Entity::AceHearts;
      break;
    }
    break;
  case Color::Diamonds:
    switch (card.figure)
    {
    case Figure::Two:
      result = Entity::TwoDiamonds;
      break;
    case Figure::Three:
      result = Entity::ThreeDiamonds;
      break;
    case Figure::Four:
      result = Entity::FourDiamonds;
      break;
    case Figure::Five:
      result = Entity::FiveDiamonds;
      break;
    case Figure::Six:
      result = Entity::SixDiamonds;
      break;
    case Figure::Seven:
      result = Entity::SevenDiamonds;
      break;
    case Figure::Eight:
      result = Entity::EightDiamonds;
      break;
    case Figure::Nine:
      result = Entity::NineDiamonds;
      break;
    case Figure::Ten:
      result = Entity::TenDiamonds;
      break;
    case Figure::Jack:
      result = Entity::JackDiamonds;
      break;
    case Figure::Queen:
      result = Entity::QueenDiamonds;
      break;
    case Figure::King:
      result = Entity::KingDiamonds;
      break;
    case Figure::Ace:
      result = Entity::AceDiamonds;
      break;
    }
  }
  return result;
}

} // namespace sfmlAdapter