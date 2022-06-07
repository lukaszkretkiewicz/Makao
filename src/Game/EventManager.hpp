#pragma once

enum class Event
{
  StartGame
};

class IEventManager
{
public:
  virtual ~IEventManager(){};
};

class EventManager : public IEventManager
{
public:
  ~EventManager() override = default;
};