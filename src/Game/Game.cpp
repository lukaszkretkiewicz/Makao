#include "Game.hpp"
#include "Player.hpp"

Game::Game(sfmlAdapter::IGuiAdapter &adapter, IInputManager &inputManager,
           IRenderer &renderer, IUpdater &updater, IDeck &deck, IPlayer &player)
    : adapter(adapter), inputManager(inputManager), renderer(renderer),
      updater(updater), deck(deck), player(player)
{
  for (const auto &card : player.getCards())
  {
    std::cout << card;
  }
  std::cout << "2222222222222222222\n";
  setupWindow();
  resetGame();
  // TODO: move to builder class
}

void Game::run(const visitor::Nodes &nodesToVisit)
{
  while (not isDone())
  {
    inputManager.handleEvents(adapter);
    updater.update(adapter, nodesToVisit);
    renderer.render(adapter);
  }
}

bool Game::isDone() const { return adapter.shouldCloseWindow(); }

void Game::setupWindow() { adapter.setupApplication("Makao"); }

void Game::resetGame() { player.setupCards(deck); }