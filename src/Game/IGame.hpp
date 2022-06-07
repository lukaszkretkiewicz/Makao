#pragma once
class IPlayer;

class IGame
{
public:
  virtual ~IGame() = default;
  virtual void run(IPlayer &player, const visitor::Nodes &) = 0;
};