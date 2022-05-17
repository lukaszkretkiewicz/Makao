#pragma once
#include "EventManager.hpp"
#include "IGame.hpp"
#include "IGuiAdapter.hpp"
#include "InputManager.hpp"
#include "Renderer.hpp"
#include "Updater.hpp"

class Game : public IGame {
public:
  Game(IGuiAdapter &, IInputManager &, IRenderer &, IUpdater &);

  void run() override;

private:
  IGuiAdapter &gui;
  IInputManager &inputManager;
  IRenderer &renderer;
  IUpdater &updater;

  bool isDone() const;
  void setupWindow();
};