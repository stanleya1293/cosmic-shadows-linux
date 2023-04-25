#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
#include <string>
#include <SDL2/SDL.h
#include <SDL2/SDL_image.h

class Player {
 public:
  Player(std::string name, float startingPosX, float startingPosY);
  ~Player();
 private:
  float posX;
  float posY;
  std::string name;
  
};

#endif
