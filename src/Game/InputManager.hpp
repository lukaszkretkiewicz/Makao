#pragma once
#include "IGuiAdapter.hpp"
class IInputManager
{
public:
  virtual ~IInputManager(){};
  virtual void handleEvents(sfmlAdapter::IGuiAdapter &) = 0;
};

class InputManager : public IInputManager
{
public:
  ~InputManager() override = default;
  void handleEvents(sfmlAdapter::IGuiAdapter &gui) override
  {
    gui.handleEvents();
  };
};