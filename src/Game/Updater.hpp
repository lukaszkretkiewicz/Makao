#pragma once

class IUpdater {
public:
  virtual ~IUpdater(){};
  virtual void update() = 0;
};

class Updater : public IUpdater {
public:
  ~Updater() override = default;
  void update() override{};
};