#pragma once
#include "IGuiAdapter.hpp"
#include "SpriteManager.hpp"
#include <SFML/Graphics.hpp>

namespace sfmlAdapter
{
class GuiAdapter : public IGuiAdapter
{
public:
  GuiAdapter(SpriteManager &spriteManager);

  void setupWindow(const std::string &gameName) override;

  bool shouldCloseWindow() const override;

  void handleEvents() override;

  void render(const Entity &objectToDraw) override;

  void addAdapterData(AdapterData &) override;

private:
  std::unique_ptr<sf::RenderWindow> window;
  sf::Event event;
  AdapterDataRef adapterDataRef{};
  SpriteManager &spriteManager;

  bool isDone{};
  void drawTextures(const Entity &objectToDraw);
};
} // namespace sfmlAdapter