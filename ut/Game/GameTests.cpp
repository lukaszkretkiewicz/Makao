#include "DeckMock.hpp"
#include "Game.hpp"
#include "GuiAdapterMock.hpp"
#include "InputManagerMock.hpp"
#include "PlayerMock.hpp"
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
  DeckMock deckMock;
  PlayerMock playerMock;
  Game sut{guiMock,     inputManagerMock, rendererMock,
           updaterMock, deckMock,         playerMock};
};

TEST_F(GameFixture, gameShouldRunInTheLoop)
{
  EXPECT_CALL(guiMock, shouldCloseWindow())
      .WillOnce(Return(false))
      .WillOnce(Return(true));
  EXPECT_CALL(inputManagerMock, handleEvents(Ref(guiMock))).Times(1);
  EXPECT_CALL(updaterMock, update(Ref(guiMock), _)).Times(1);
  EXPECT_CALL(rendererMock, render(Ref(guiMock))).Times(1);
  visitor::Nodes nodesToVisit;

  sut.run(playerMock, nodesToVisit);
}

TEST(RendererTest, as)
{
  Renderer sut;
  GuiAdapterMock guiMock;

  sut.render(guiMock);
}
} // namespace tests