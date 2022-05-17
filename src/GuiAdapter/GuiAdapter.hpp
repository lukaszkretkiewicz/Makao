#include "IGuiAdapter.hpp"
#include <SFML/Graphics.hpp>

class GuiAdapter : public IGuiAdapter {
public:
  void setupWindow(const std::string &gameName) override;

  bool shouldCloseWindow() const override;

  void handleEvents() override;

  void render() override;

private:
  std::unique_ptr<sf::RenderWindow> window;
  sf::Event event;
  bool isDone{};
};