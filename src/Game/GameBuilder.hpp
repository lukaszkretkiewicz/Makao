// #pragma once
// #include "Game.hpp"
// #include "InputManager.hpp"
// #include "Renderer.hpp"
// #include "Updater.hpp"

// class GameBuilder
// {
// public:
//   GameBuilder();
//   GameBuilder &withInputManager(std::unique_ptr<IInputManager>);
//   GameBuilder &withUpdater(std::unique_ptr<IUpdater>);
//   GameBuilder &withRenderer(std::unique_ptr<IRenderer>);
//   GameBuilder &withGui(std::unique_ptr<sfmlAdapter::IGuiAdapter>);
//   GameBuilder &withPlayer(std::unique_ptr<IPlayer> player);
//   Game build();

// private:
//   std::unique_ptr<IInputManager> inputManager;
//   std::unique_ptr<IUpdater> updater;
//   std::unique_ptr<IRenderer> renderer;
//   std::unique_ptr<sfmlAdapter::IGuiAdapter> guiAdapter;
//   Deck deck;

//   Game game;
// };