#include "IPlayer.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
class PlayerMock : public IPlayer {
public:
  MOCK_METHOD(std::vector<Card>, getCards, (), (const, override));
  MOCK_METHOD(void, addCard, (const Card &card), (override));
};