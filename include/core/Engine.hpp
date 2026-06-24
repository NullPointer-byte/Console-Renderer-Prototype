//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

#pragma once

#include <string>
#include <vector>
#include "../utils/ConsoleWorkspace.hpp"

class Engine {
public:
    void Update();
    void Draw();
    float GetFrameTime() const;

private:
    float deltatime = 0.0f;
    float lasttime = 0.0f;
};