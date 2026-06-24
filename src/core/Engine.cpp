//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

#include "../../include/utils/ConsoleWorkspace.hpp"
#include <string>
#include <vector>
#include <memory>
#include <chrono>
#include "../../include/core/Engine.hpp"
#include <iostream>
#include "../../tools/toolBox.hpp"

void Engine::Update() {
/*DT*/
    using Clock = std::chrono::high_resolution_clock;

    float currenttime = std::chrono::duration<float>(Clock::now().time_since_epoch()).count();

    deltatime = currenttime - lasttime;
    lasttime = currenttime;
/*DT*/
    std::vector<Toolbox::materials> Materials = {
        {1},
        {3},
        {5},
        {7},
        {9}
    };

    //Toolbox::materials mat;

    //char currentChar = mat.GetChar();

    //std::cout << currentChar << "\n";
}

float Engine::GetFrameTime() const {
    return deltatime;
}

void Engine::Draw() {
    Toolbox::materials mat;
    
    Update();

    for (char c : Charset::ramp) {
        Workspace::printCentered(c);
    }
}
