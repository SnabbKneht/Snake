#include <iostream>
#include "display_utils.h"
#include "game.h"
#include "game_engine.h"
#include <string>

#include "high_scores.h"
#include "score_entry.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
    system("cls");
    cout << "Press enter to start.\n";
    cin.get();

    system("cls");

    game g;
    game_engine::tick_functions.push_back([&g]
    {
        display_utils::reset_console_cursor();
        display_utils::draw_grid(g.get_grid());
        cout << '\n';
        display_utils::print_score(g.get_snake_length());
    });
    game_engine::run();

    int score = g.get_snake_length();
    system("cls");
    cout << "Game over!\n\n";
    display_utils::print_score(score);

    string player_name;
    cout << "Enter your name:\n";
    cin >> player_name;

    high_scores::load_file();
    high_scores::save_score_if_high(score_entry(player_name, score));

    display_utils::print_high_scores();
    high_scores::save_file();

    cout << "\nPress enter to exit.\n";
    cin.clear();
    cin.ignore();
    cin.get();
    system("cls");
}
