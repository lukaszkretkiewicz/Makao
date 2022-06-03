#include <SFML/Graphics.hpp>
#include <iostream>
#include <unordered_map>

namespace sfmlAdapter
{

class TextureManager
{
public:
  void loadTextures()
  {
    addCards("clubs");
    addCards("diamonds");
    addCards("hearts");
    addCards("spades");
    textures["cardBack"].loadFromFile("../data/card-back1.png");
  }

  const sf::Texture &get(const std::string &texture) const
  {
    return textures.at(texture);
  }

private:
  std::map<std::string, sf::Texture> textures;

  void addCards(const char *color)
  {
    for (char i = 1; i <= 13; i++)
    {
      std::string path{"../data/card-"};
      path += color;
      path += "-";
      path += std::to_string(i);
      path += ".png";
      if (not textures[color + std::to_string(i)].loadFromFile(path))
        std::cout << "ERR Unable to open file " << path;
    }
  }
};
} // namespace sfmlAdapter