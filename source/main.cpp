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
        display_utils::clear_console();
        display_utils::draw_grid_with_border(g.m_grid);
    });
    game_engine::run();
}
