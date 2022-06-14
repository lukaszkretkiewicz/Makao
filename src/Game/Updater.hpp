#pragma once
#include "Node.hpp"
class IUpdater
{
public:
  virtual ~IUpdater(){};
  virtual void update(sfmlAdapter::IGuiAdapter &, const visitor::Nodes &) = 0;
};

class Updater : public IUpdater
{
public:
  ~Updater() override = default;
  void update(sfmlAdapter::IGuiAdapter &adapter,
              const visitor::Nodes &nodes) override
  {
    adapter.updateSprites(nodes);
  }
};