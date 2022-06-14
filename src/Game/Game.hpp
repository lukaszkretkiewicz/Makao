#pragma once
#include "Deck.hpp"
#include "IGame.hpp"
#include "IGuiAdapter.hpp"
#include "InputManager.hpp"
#include "Renderer.hpp"
#include "Updater.hpp"
#include <vector>

class Game : public IGame
{
public:
  Game(sfmlAdapter::IGuiAdapter &, IInputManager &, IRenderer &, IUpdater &,
       IDeck &, IPlayer &);

  void run(const visitor::Nodes &) override;

private:
  sfmlAdapter::IGuiAdapter &adapter;
  IInputManager &inputManager;
  IRenderer &renderer;
  IUpdater &updater;
  IDeck &deck;
  IPlayer &player;

  visitor::Nodes nodesToVisit;

  bool isDone() const;
  void setupWindow();
  void resetGame();
};