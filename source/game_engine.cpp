#include "game_engine.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
#include "display_utils.h"

using std::cout;

std::chrono::milliseconds game_engine::frame_duration = std::chrono::milliseconds(1000);

void game_engine::start()
{
}

void game_engine::tick()
{
    // if(_kbhit())
    // {
    //     char key = _getch();
    //     cout << "You pressed \"" << key << "\" key\n";
    //     if(key == 'c') display_utils::clear_console();
    // }

    display_utils::clear_console();
    auto window = display_utils::generate_window(100, 30);
    display_utils::draw_window(window);
}
