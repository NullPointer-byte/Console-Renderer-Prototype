//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

#include <iostream>
#include <string>
#include <vector>

#if defined(_WIN32)
#include "windows.h"
#else
#include <sys/ioctl.h>
#include <unistd.h>
#endif

int getConsoleWidth() {
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

void printCentered(const std::string& text) {
  int width = getConsoleWidth();

  if (text.length() >= width) {
    std::cout << text << "\n";
    return;
  }

  int padding = (width - text.length()) / 2;

  std::cout << std::string(padding, ' ') << text << "\n";
}

int main() {
  printCentered("This is 2D Game Engine was created one people from Donbass");
  return 0;
}
