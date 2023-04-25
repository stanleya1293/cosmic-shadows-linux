#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include <SDL2/SDL.h>
#include <iostream>

class GameWindow {
 public:
  GameWindow();
  void create(char* title);
  SDL_Window* getWindow();
  SDL_Renderer* getRenderer();
  ~GameWindow();
 private:
  const int defaultScreenH = 500;
  const int defaultScreenW = 500;
  SDL_Window* window;
  SDL_Renderer* renderer;
  bool windowOpen;
};

#endif
