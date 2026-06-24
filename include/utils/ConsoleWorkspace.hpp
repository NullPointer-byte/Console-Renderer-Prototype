//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

#pragma once

#include <string>
#include <sstream>
#include <iostream>

#if defined(_WIN32)
#include "windows.h"
#else
#include <sys/ioctl.h>
#include <unistd.h>
#endif

namespace Workspace {
  int getConsoleWidth();
  
  template<typename T>
  void printCentered(const T& value)
{
    std::ostringstream oss;
    oss << value;
    std::string text = oss.str();

    int width = getConsoleWidth();

    if (text.length() >= width)
    {
        std::cout << text << "\n";
        return;
    }

    int padding = (width - text.length()) / 2;
    std::cout << std::string(padding, ' ') << text << "\n";
}
}
