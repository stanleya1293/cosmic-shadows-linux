#include <SDL2/SDL.h>
#include <iostream>
#include "GameWindow.h"

GameWindow::GameWindow() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    std::cerr << "Something went wrong with initialization: " << SDL_GetError();
  };
  SDL_Window* window = NULL;
  SDL_Renderer* renderer = NULL;
}

void GameWindow::create(char* title) {
  window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, defaultScreenW, defaultScreenH, SDL_WINDOW_FULLSCREEN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}
