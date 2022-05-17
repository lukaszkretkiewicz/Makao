#pragma once

#include "InputManager.hpp"

struct InputManagerMock : public IInputManager {
  ~InputManagerMock() override = default;

  MOCK_METHOD(void, handleEvents, (IGuiAdapter &), (override));
};