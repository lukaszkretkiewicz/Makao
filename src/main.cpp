#include "Game.hpp"
#include "GuiAdapter.hpp"
#include "SpriteManager.hpp"

int main()
{
  InputManager inputManager;
  Renderer renderer;
  Updater updater;
  sfmlAdapter::SpriteManager spriteManager;
  sfmlAdapter::GuiAdapter gui(spriteManager);
  Game game(gui, inputManager, renderer, updater);

  game.run();
  return 0;
}