#include "Game.hpp"
#include "GuiAdapter.hpp"
#include "Player.hpp"
#include "Randomizer.hpp"
#include "SpriteManager.hpp"

int main()
{
  InputManager inputManager;
  Renderer renderer;
  Updater updater;
  sfmlAdapter::GuiAdapter gui;
  Deck deck(Randomizer{});
  Player player;
  for (const auto &card : player.getCards())
  {
    std::cout << card;
  }
  std::cout << "000000000000000000000000000000\n";
  Game game(gui, inputManager, renderer, updater, deck, player);
  for (const auto &card : player.getCards())
  {
    std::cout << card;
  }
  std::cout << "1111111111111111111111111\n";
  visitor::Nodes nodesToVisit;
  nodesToVisit.emplace_back(deck);
  nodesToVisit.emplace_back(player);

  game.run(nodesToVisit);
  return 0;
}