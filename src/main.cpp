#include "Game.hpp"
#include "GuiAdapter.hpp"
#include "Player.hpp"
#include "SpriteManager.hpp"

int main()
{
  InputManager inputManager;
  Renderer renderer;
  Updater updater;
  sfmlAdapter::GuiAdapter gui;
  Deck deck;

  Player player(deck);
  Game game(gui, inputManager, renderer, updater, deck, player);

  visitor::Nodes nodesToVisit;
  nodesToVisit.emplace_back(deck);
  nodesToVisit.emplace_back(player);

  game.run(player, nodesToVisit);
  return 0;
}