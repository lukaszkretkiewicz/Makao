#pragma once
#include "Entity.hpp"

class IRenderer
{
public:
  virtual ~IRenderer(){};
  virtual void render(sfmlAdapter::IGuiAdapter &) = 0;
};

class Renderer : public IRenderer
{
public:
  ~Renderer() override = default;
  void render(sfmlAdapter::IGuiAdapter &adapter) override { adapter.render(); }
};