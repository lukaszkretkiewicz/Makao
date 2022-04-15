#include "IPile.hpp"
#include <gmock/gmock.hpp>
#include <gtest/gtest.hpp>

class PileMock : public IPile {
public:
  MOCK_METHOD(void, addCard, (const Card &), (override));
  MOCK_METHOD(size_t, getNumberOfCards, (), (const, override));
};