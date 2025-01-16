#include <iostream>
#include "display_utils.h"
#include "game.h"
#include "game_engine.h"

using std::cin;
using std::cout;

int main()
{
    game g;
    game_engine::tick_functions.push_back([&g]
    {
        display_utils::reset_console_cursor();
        display_utils::draw_grid(g.get_grid());
        display_utils::print_score(g.get_snake_length());
    });
    game_engine::run();

    system("cls");
    cout << "Game over!\n";
    display_utils::print_score(g.get_snake_length());
    cout << "Press enter to exit.\n";
    cin.get();
}
