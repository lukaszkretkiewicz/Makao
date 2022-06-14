#pragma once
#include "Card.hpp"
#include "Entity.hpp"
#include "TextureManager.hpp"
#include "Visitor.hpp"
#include <SFML/Graphics.hpp>
class IPlayer;

// TO POWINNO BYC ZAIMPLEMENTOWANE JAKO WZORZEC VISITOR - KAŻDA KLASA DECK,
// PILE, CARD BĘDZIE NODE'M
namespace sfmlAdapter
{
class SpriteManager : public visitor::Visitor
{

public:
  SpriteManager(const std::unique_ptr<sf::RenderWindow> &);
  sf::Sprite &get(const Entity &);
  void visitDeck(const IDeck &) override;
  void visitPlayer(const IPlayer &) override;
  void buildSprites();
  void resetEntitiesToDraw();
  Entities getEntitiesToDraw() const;

private:
  std::map<Entity, sf::Sprite> sprites;
  TextureManager textureManager;
  const std::unique_ptr<sf::RenderWindow> &window;
  Entities entitiesToDrawDuringThisTick;

  sf::Sprite createSpriteForMap(const Entity &);
  Entity convertCardStructToSpriteEnum(const Card &);
};
} // namespace sfmlAdapter