#include "Game.hpp"

Game::Game(IGuiAdapter &gui, IInputManager &inputManager, IRenderer &renderer,
           IUpdater &updater)
    : gui(gui), inputManager(inputManager), renderer(renderer),
      updater(updater) {
  setupWindow();
}

void Game::run() {
  while (!isDone()) {
    inputManager.handleEvents(gui);
    updater.update();
    renderer.render(gui);
  }
}

bool Game::isDone() const { return gui.shouldCloseWindow(); }

void Game::setupWindow() { gui.setupWindow("Makao"); }