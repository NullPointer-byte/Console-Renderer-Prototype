Console Renderer Prototype

A small experimental 2D console-based game engine written in C++.

This project is an early-stage console rendering engine that simulates 2D graphics using characters in the terminal.

Instead of pixels, it uses ASCII/Unicode symbols mapped from brightness values.

The engine follows a simple loop:
Update -> Draw -> Repeat

Features:
- Console-based rendering system
- Brightness to character mapping (charset ramp)
- Cross-platform console utilities (Linux / Windows)
- Engine loop (Update / Draw separation)
- Frame timing using std::chrono
- Text centering utility for console UI

Rendering Concept:
Each pixel is represented by a character.

ASCII charset:
 .:-=+*#%@

Brightness values (0–9) are mapped into characters to simulate shading.

Architecture:

Engine:
Update() -> logic + timing
Draw() -> rendering output
GetFrameTime()
Game loop (planned)

Workspace (utils):
printCentered()
console width detection
console helpers

Toolbox:
Charset system (brightness mapping)

Game Loop (current):
while (true)
{
    engine.Update();
    engine.Draw();
}

Project Structure:
include/
src/
tools/

Build:
mkdir build
cd build
cmake ..
make

Run:
./GameEngine

Status:
Rendering system: working
Game objects: not implemented
Framebuffer: not implemented
Input system: planned
Camera system: planned

Notes:
Terminal must support UTF-8 for Unicode mode (░▒▓█).
Otherwise ASCII mode is recommended.

Author:
NullPointer-byte

License:
To be defined (experimental / personal use)
