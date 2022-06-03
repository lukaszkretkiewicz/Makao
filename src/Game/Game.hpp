#pragma once
#include "Deck.hpp"
#include "EventManager.hpp"
#include "IGame.hpp"
#include "IGuiAdapter.hpp"
#include "InputManager.hpp"
#include "Renderer.hpp"
#include "Updater.hpp"
#include <vector>

class Game : public IGame
{
public:
  Game(sfmlAdapter::IGuiAdapter &, IInputManager &, IRenderer &, IUpdater &);

  void run() override;

private:
  sfmlAdapter::IGuiAdapter &adapter;
  IInputManager &inputManager;
  IRenderer &renderer;
  IUpdater &updater;

  Deck deck;

  bool isDone() const;
  void setupWindow();
};