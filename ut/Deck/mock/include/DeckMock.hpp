#include "IDeck.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class DeckMock : public IDeck {
public:
  MOCK_METHOD(std::vector<Card>, getCards, (), (const, override));
  MOCK_METHOD(Card, pullCard, (), (override));
};