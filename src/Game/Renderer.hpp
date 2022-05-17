#pragma once

class IRenderer {
public:
  virtual ~IRenderer(){};
  virtual void render(IGuiAdapter &) = 0;
};

class Renderer : public IRenderer {
public:
  ~Renderer() override = default;
  void render(IGuiAdapter &gui) override { gui.render(); }
};