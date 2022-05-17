#include "Game.hpp"
#include "GuiAdapter.hpp"

int main() {
  GuiAdapter gui;
  InputManager inputManager;
  Renderer renderer;
  Updater updater;
  Game game(gui, inputManager, renderer, updater);

  game.run();
  return 0;
}