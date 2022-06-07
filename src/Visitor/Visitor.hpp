#pragma once

class IDeck;
class IPlayer;

namespace visitor
{

class Visitor
{
public:
  virtual void visitDeck(const IDeck &) = 0;
  virtual void visitPlayer(const IPlayer &) = 0;
};
} // namespace visitor