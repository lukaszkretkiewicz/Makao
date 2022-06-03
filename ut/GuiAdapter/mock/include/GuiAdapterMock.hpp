#include "IGuiAdapter.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

struct GuiAdapterMock : public sfmlAdapter::IGuiAdapter
{
  MOCK_METHOD(bool, shouldCloseWindow, (), (const, override));
  MOCK_METHOD(void, setupWindow, (const std::string &), (override));
  MOCK_METHOD(void, handleEvents, (), (override));
  MOCK_METHOD(void, render, (const sfmlAdapter::Entity &), (override));
  MOCK_METHOD(void, addAdapterData, (sfmlAdapter::AdapterData &), (override));
};