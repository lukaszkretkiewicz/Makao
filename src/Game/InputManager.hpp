#pragma once

class IInputManager {
public:
  virtual ~IInputManager(){};
  virtual void handleEvents(IGuiAdapter &) = 0;
};

class InputManager : public IInputManager {
public:
  ~InputManager() override = default;
  void handleEvents(IGuiAdapter &gui) override { gui.handleEvents(); };
};