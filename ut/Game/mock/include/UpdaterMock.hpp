#pragma once
#include "Updater.hpp"
#include <gmock/gmock.h>

struct UpdaterMock : public IUpdater
{

  ~UpdaterMock() override = default;

  MOCK_METHOD(void, update, (), (override));
};