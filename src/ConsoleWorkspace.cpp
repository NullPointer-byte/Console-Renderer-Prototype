//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

#include "../include/utils/ConsoleWorkspace.hpp"
#include <string>
#include <iostream>
#include <sstream>

int Workspace::getConsoleWidth() {
#if defined(_WIN32)
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  return csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
  struct winsize w;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  return w.ws_col;
#endif
}
