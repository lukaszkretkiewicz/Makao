#pragma once
#include <SFML/Graphics.hpp>

namespace sfmlAdapter
{

struct AdapterData
{
  sf::Sprite sprite;
};

using AdapterDataRef = std::vector<std::reference_wrapper<AdapterData>>;
} // namespace sfmlAdapter