#include "EventManagerMock.hpp"
#include "Game.hpp"
#include "GuiAdapterMock.hpp"
#include "InputManagerMock.hpp"
#include "RendererMock.hpp"
#include "UpdaterMock.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
namespace tests
{

using namespace ::testing;

struct GameFixture : public Test
{
  GuiAdapterMock guiMock;
  InputManagerMock inputManagerMock;
  RendererMock rendererMock;
  UpdaterMock updaterMock;
  Game sut{guiMock, inputManagerMock, rendererMock, updaterMock};
};

TEST_F(GameFixture, gameShouldRunInTheLoop)
{
  EXPECT_CALL(guiMock, shouldCloseWindow())
      .WillOnce(Return(false))
      .WillOnce(Return(true));
  EXPECT_CALL(inputManagerMock, handleEvents(_)).Times(1);
  EXPECT_CALL(updaterMock, update()).Times(1);
  EXPECT_CALL(rendererMock, render(_, _)).Times(1);

  sut.run();
}

TEST(RendererTest, as)
{
  Renderer sut;
  GuiAdapterMock guiMock;

  sut.render(guiMock, sfmlAdapter::Entity::Deck);
}
} // namespace tests