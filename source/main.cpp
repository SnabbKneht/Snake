#include <conio.h>
#include <iostream>
#include <thread>

#include "display_utils.h"
#include "game_engine.h"

using std::cout;

int main()
{
    game g;
    game_engine::tick_functions.push_back([&g]
    {
        display_utils::reset_console_cursor();
        display_utils::draw_grid(g.m_grid);
    });
    game_engine::run();
}
