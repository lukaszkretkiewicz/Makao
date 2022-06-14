#include "IGuiAdapter.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

struct GuiAdapterMock : public sfmlAdapter::IGuiAdapter
{
  MOCK_METHOD(bool, shouldCloseWindow, (), (const, override));
  MOCK_METHOD(void, setupApplication, (const std::string &), (override));
  MOCK_METHOD(void, handleEvents, (Event), (override));
  MOCK_METHOD(void, render, (), (override));
  MOCK_METHOD(void, updateSprites,
              (std::vector<std::reference_wrapper<visitor::Node>>), (override));
};