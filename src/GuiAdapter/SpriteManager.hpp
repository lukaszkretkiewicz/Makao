#pragma once
#include "Entity.hpp"
#include "TextureManager.hpp"
#include <SFML/Graphics.hpp>
#include <map>
// TO POWINNO BYC ZAIMPLEMENTOWANE JAKO WZORZEC VISITOR - KAŻDA KLASA DECK,
// PILE, CARD BĘDZIE NODE'M
namespace sfmlAdapter
{
class SpriteManager
{

public:
  SpriteManager() { textureManager.loadTextures(); }

  sf::Sprite get(const Entity &object)
  {
    if (not sprites.count(object))
    {
      sprites.emplace(object, prepareSprite(object));
    }
    return sprites.at(object);
  }

private:
  std::map<Entity, sf::Sprite> sprites;
  TextureManager textureManager;

  sf::Sprite prepareSprite(const Entity &object)
  {
    std::string nameOfTexture = hashedTextureNames.at(object);
    sf::Sprite sprite{textureManager.get(nameOfTexture)};
    return sprite;
  }
};
} // namespace sfmlAdapter