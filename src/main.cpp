#include <iostream>
#include <raylib.hpp>
#include <raymath.hpp>
#include <deque>

using namespace std;

const int CELL_SIZE = 5;
const int CELL_COUNT = 100;

Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

int offset = 75;

double lastUpdateTime = 0.;

class Simulation {
};

int main() {
    cout << "Starting the simulation..." << endl;
    InitWindow(CELL_SIZE*CELL_COUNT, CELL_SIZE*CELL_COUNT, "Gravity Simulation");

    Simulation sim = Simulation();

    // Game Loop
    while(WindowShouldClose() == false) {
        BeginDrawing();

        // Drawing
        ClearBackground(RAYWHITE);
        for (int i = 0; i < CELL_COUNT; i++) {
            for (int j = 0; j < CELL_COUNT; j++) {
                DrawRectangleLines(i*CELL_SIZE, j*CELL_SIZE, CELL_SIZE, CELL_SIZE, BLACK);
            }
        }
        
        // sim.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
} 