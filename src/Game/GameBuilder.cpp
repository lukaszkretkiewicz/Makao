// #include "GameBuilder.hpp"

// GameBuilder::GameBuilder() = default;

// GameBuilder &
// GameBuilder::withInputManager(std::unique_ptr<IInputManager> inputManager)
// {
//   inputManager = std::move(inputManager);
//   return *this;
// }
// GameBuilder &GameBuilder::withUpdater(std::unique_ptr<IUpdater> updater)
// {
//   updater = std::move(updater);
//   return *this;
// }

// GameBuilder &GameBuilder::withRenderer(std::unique_ptr<IRenderer> renderer)
// {
//   renderer = std::move(renderer);
//   return *this;
// }

// GameBuilder &GameBuilder::withGui(std::unique_ptr<sfmlAdapter::IGuiAdapter>
// gui)
// {
//   guiAdapter = std::move(gui);
//   return *this;
// }

// GameBuilder &GameBuilder::withPlayer(std::unique_ptr<IPlayer> player)
// {
//   player = std::move(player);
//   return *this;
// }

// Game GameBuilder::build() { Game game(guiAdapter.get(), inputManager,
// renderer, updater, deck, player); }