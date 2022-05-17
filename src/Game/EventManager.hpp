#pragma once

class IEventManager {
public:
  virtual ~IEventManager(){};
};

class EventManager : public IEventManager {
public:
  ~EventManager() override = default;
};