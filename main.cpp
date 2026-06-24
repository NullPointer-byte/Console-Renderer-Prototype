//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

#include <iostream>
#include <string>
#include <vector>
#include "include/utils/ConsoleWorkspace.hpp"
#include "include/core/Engine.hpp"

int main() {
  Engine engine;

  Workspace::printCentered("This is 2D Game Engine was created one people from Donbass");
  
  int run = 1;
  engine.Draw();

  return 0;
}
