#include "IGuiAdapter.hpp"
#include <SFML/Graphics.hpp>

class GuiAdapter : public IGuiAdapter {
public:
  void setupWindow(const std::string &gameName) override {
    window =
        std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), gameName);
    window->setFramerateLimit(60);
  };

  bool shouldCloseWindow() const override { return isDone; };

  void handleEvents() override {
    while (window->pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        isDone = true;
    }
  }

  void render() override {
    window->clear(sf::Color(0, 150, 0));
    window->display();
  }

private:
  std::unique_ptr<sf::RenderWindow> window;
  sf::Event event;
  bool isDone{};
};