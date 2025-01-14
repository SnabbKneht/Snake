#include "game_engine.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
#include "display_utils.h"
#include "grid.h"

using std::cout;

std::chrono::milliseconds game_engine::frame_duration = std::chrono::milliseconds(1000);

void game_engine::start()
{
    grid g(10, 10);
    display_utils::draw_grid_with_border(g);
}

void game_engine::tick()
{
    // if(_kbhit())
    // {
    //     char key = _getch();
    //     cout << "You pressed \"" << key << "\" key\n";
    //     if(key == 'c') display_utils::clear_console();
    // }


}
