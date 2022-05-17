#pragma once

#include "Renderer.hpp"

struct RendererMock : public IRenderer {
  ~RendererMock() override = default;

  MOCK_METHOD(void, render, (IGuiAdapter &), (override));
};