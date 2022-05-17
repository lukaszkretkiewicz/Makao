#include "GuiAdapter.hpp"

void GuiAdapter::setupWindow(const std::string &gameName) {
  window =
      std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), gameName);
  window->setFramerateLimit(60);
}

bool GuiAdapter::shouldCloseWindow() const { return isDone; }

void GuiAdapter::handleEvents() {
  while (window->pollEvent(event)) {
    if (event.type == sf::Event::Closed)
      isDone = true;
  }
}

void GuiAdapter::render() {
  window->clear(sf::Color(0, 150, 0));
  window->display();
}