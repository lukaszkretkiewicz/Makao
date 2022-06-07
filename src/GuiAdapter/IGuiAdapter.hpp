#pragma once
#include "AdapterData.hpp"
#include "Entity.hpp"
#include "Node.hpp"
#include <string>

enum class Event;

namespace sfmlAdapter
{
class IGuiAdapter
{
public:
  virtual bool shouldCloseWindow() const = 0;
  virtual void setupWindow(const std::string &) = 0;
  virtual void handleEvents(Event) = 0;
  virtual void render() = 0;
  virtual void addAdapterData(AdapterData &) = 0;
  virtual void updateSprites(visitor::Nodes) = 0;
};
} // namespace sfmlAdapter