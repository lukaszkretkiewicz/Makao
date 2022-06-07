#include "GuiAdapter.hpp"
#include "Game.hpp"

namespace sfmlAdapter
{

GuiAdapter::GuiAdapter() = default;

void GuiAdapter::setupWindow(const std::string &gameName)
{
  window =
      std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), gameName);
  window->setFramerateLimit(60);
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
}

void GuiAdapter::addAdapterData(AdapterData &data)
{
  adapterDataRef.push_back(data);
}

void GuiAdapter::updateSprites(visitor::Nodes nodes)
{
  for (auto &node : nodes)
  {
    node.get().accept(spriteManager);
  }
}

void GuiAdapter::drawTextures()
{
  for (const auto &objectToDraw : entities_all)
  {
    window->draw(spriteManager.get(objectToDraw));
  }
}
} // namespace sfmlAdapter