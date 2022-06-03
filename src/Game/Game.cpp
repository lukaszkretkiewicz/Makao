#include "Game.hpp"

Game::Game(sfmlAdapter::IGuiAdapter &adapter, IInputManager &inputManager,
           IRenderer &renderer, IUpdater &updater)
    : adapter(adapter), inputManager(inputManager), renderer(renderer),
      updater(updater)
{
  setupWindow();
  // TODO: move to builder class
  // adapter.addAdapterData(deck.adapterData);
}

void Game::run()
{
  while (!isDone())
  {
    inputManager.handleEvents(adapter);
    updater.update();
    renderer.render(adapter, sfmlAdapter::Entity::Deck);
  }
}

bool Game::isDone() const { return adapter.shouldCloseWindow(); }

void Game::setupWindow() { adapter.setupWindow("Makao"); }