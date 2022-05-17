#pragma once
#include <string>
class IGuiAdapter {
public:
  virtual bool shouldCloseWindow() const = 0;
  virtual void setupWindow(const std::string &gameName) = 0;
  virtual void handleEvents() = 0;
  virtual void render() = 0;
};
