#pragma once
#include "Entity.hpp"

class IRenderer
{
public:
  virtual ~IRenderer(){};
  virtual void render(sfmlAdapter::IGuiAdapter &,
                      const sfmlAdapter::Entity &objectToDraw) = 0;
};

class Renderer : public IRenderer
{
public:
  ~Renderer() override = default;
  void render(sfmlAdapter::IGuiAdapter &adapter,
              const sfmlAdapter::Entity &objectToDraw) override
  {
    adapter.render(objectToDraw);
  }
};