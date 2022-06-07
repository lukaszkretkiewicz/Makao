#include "Game.hpp"
#include "Player.hpp"

Game::Game(sfmlAdapter::IGuiAdapter &adapter, IInputManager &inputManager,
           IRenderer &renderer, IUpdater &updater, IDeck &deck, IPlayer &player)
    : adapter(adapter), inputManager(inputManager), renderer(renderer),
      updater(updater), deck(deck), player(player)
{
  setupWindow();
  setupGame();
  // TODO: move to builder class
}

void Game::run(IPlayer &, const visitor::Nodes &nodesToVisit)
{
  while (not isDone())
  {
    inputManager.handleEvents(adapter);
    updater.update(adapter, nodesToVisit);
    renderer.render(adapter);
  }
}

bool Game::isDone() const { return adapter.shouldCloseWindow(); }

void Game::setupWindow() { adapter.setupWindow("Makao"); }

void Game::setupGame() { player.setupCards(deck); }