#include "IRandomizer.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class RandomizerMock : public IRandomizer {
public:
  RandomizerMock() = default;
  ~RandomizerMock() = default;
  MOCK_METHOD(Cards, shuffleCards, (const Cards &), (const, override));
};