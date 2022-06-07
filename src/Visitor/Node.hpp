#pragma once
#include "Visitor.hpp"
// klasy deck, pile itp beda mialy metody w visitorze, ktore odpowiadaja za
// wyswietlanie, ruch itp
namespace visitor
{

class Node
{
public:
  virtual void accept(Visitor &) const = 0;
};

using Nodes = std::vector<std::reference_wrapper<Node>>;
} // namespace visitor