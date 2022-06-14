#pragma once
class IPlayer;

class IGame
{
public:
  virtual ~IGame() = default;
  virtual void run(const visitor::Nodes &) = 0;
};