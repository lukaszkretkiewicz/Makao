#pragma once
#include "EventManager.hpp"
#include "IGame.hpp"
#include "IGuiAdapter.hpp"
#include "InputManager.hpp"
#include "Renderer.hpp"
#include "Updater.hpp"

class Game : public IGame {
public:
  Game(IGuiAdapter &gui, IInputManager &inputManager, IRenderer &renderer,
       IUpdater &updater)
      : gui(gui), inputManager(inputManager), renderer(renderer),
        updater(updater) {
    setupWindow();
  }

  void run() override {
    while (!isDone()) {
      inputManager.handleEvents(gui);
      updater.update();
      renderer.render(gui);
    }
  };

private:
  IGuiAdapter &gui;
  IInputManager &inputManager;
  IRenderer &renderer;
  IUpdater &updater;

  bool isDone() { return gui.shouldCloseWindow(); }
  void setupWindow() { gui.setupWindow("Makao"); }
};