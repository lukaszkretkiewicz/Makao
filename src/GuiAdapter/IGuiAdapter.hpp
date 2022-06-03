#pragma once
#include "AdapterData.hpp"
#include "Entity.hpp"
#include <string>

namespace sfmlAdapter
{
class IGuiAdapter
{
public:
  virtual bool shouldCloseWindow() const = 0;
  virtual void setupWindow(const std::string &) = 0;
  virtual void handleEvents() = 0;
  virtual void render(const Entity &objectToDraw) = 0;
  virtual void addAdapterData(AdapterData &) = 0;
};
} // namespace sfmlAdapter