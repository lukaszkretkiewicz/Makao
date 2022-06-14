#pragma once
#include "IGuiAdapter.hpp"
#include "SpriteManager.hpp"
#include <SFML/Graphics.hpp>

namespace sfmlAdapter
{
class GuiAdapter : public IGuiAdapter
{
public:
  GuiAdapter();

  void setupApplication(const std::string &gameName) override;

  bool shouldCloseWindow() const override;

  void handleEvents(Event) override;

  void render() override;

  void updateSprites(const visitor::Nodes &) override;

private:
  std::unique_ptr<sf::RenderWindow> window;
  sf::Event sfmlEvent;
  SpriteManager spriteManager{window};

  bool isDone{};
  void drawTextures();
};
} // namespace sfmlAdapter