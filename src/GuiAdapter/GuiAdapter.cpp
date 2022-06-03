#include "GuiAdapter.hpp"
#include "Game.hpp"

namespace sfmlAdapter
{

GuiAdapter::GuiAdapter(SpriteManager &spriteManager)
    : spriteManager(spriteManager)
{
}

void GuiAdapter::setupWindow(const std::string &gameName)
{
  window =
      std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), gameName);
  window->setFramerateLimit(60);
}

bool GuiAdapter::shouldCloseWindow() const { return isDone; }

void GuiAdapter::handleEvents()
{
  while (window->pollEvent(event))
  {
    if (event.type == sf::Event::Closed)
      isDone = true;
  }
}

void GuiAdapter::render(const Entity &objectToDraw)
{
  window->clear(sf::Color(0, 150, 0));

  drawTextures(objectToDraw);
  window->display();
}

void GuiAdapter::addAdapterData(AdapterData &data)
{
  adapterDataRef.push_back(data);
}

void GuiAdapter::drawTextures(const Entity &objectToDraw)
{
  // for (const auto &data : adapterDataRef) {
  //   window->draw(data.get().sprite);
  // }
  window->draw(spriteManager.get(objectToDraw));
}
} // namespace sfmlAdapter