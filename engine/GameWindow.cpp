#include <SDL2/SDL.h>
#include <iostream>
#include "GameWindow.h"

GameWindow::GameWindow() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    std::cerr << "Something went wrong with initialization: " << SDL_GetError();
  };
  window = NULL;
  renderer = NULL;
  windowOpen = true;
}

void GameWindow::create(char* title) {
  window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, defaultScreenW, defaultScreenH, SDL_WINDOW_MAXIMIZED);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  SDL_Event* e;
  while (windowOpen) {
    SDL_PollEvent(e);
    if (e->type == SDL_WINDOWEVENT) {
      if (e->window.event == SDL_WINDOWEVENT_CLOSE) {
	windowOpen = false;
      }
    }
    SDL_RenderPresent(renderer);
  }
}

GameWindow::~GameWindow() {
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
}
