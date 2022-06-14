#include "GuiAdapter.hpp"
#include "Game.hpp"

namespace sfmlAdapter
{

GuiAdapter::GuiAdapter() = default;

void GuiAdapter::setupApplication(const std::string &gameName)
{
  window =
      std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), gameName);
  window->setFramerateLimit(60);
  spriteManager.buildSprites();
}

bool GuiAdapter::shouldCloseWindow() const { return isDone; }

void GuiAdapter::handleEvents(Event)
{
  while (window->pollEvent(sfmlEvent))
  {
    if (sfmlEvent.type == sf::Event::Closed)
      isDone = true;
  }
}

void GuiAdapter::render()
{
  window->clear(sf::Color(0, 150, 0));
  drawTextures();
  window->display();
  spriteManager.resetEntitiesToDraw();
}

void GuiAdapter::updateSprites(const visitor::Nodes &nodes)
{
  for (const auto &node : nodes)
  {
    node.get().accept(spriteManager);
  }
}

void GuiAdapter::drawTextures()
{
  for (const auto &objectToDraw : spriteManager.getEntitiesToDraw())
  {
    window->draw(spriteManager.get(objectToDraw));
  }
}
} // namespace sfmlAdapter