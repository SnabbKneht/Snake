#include "display_utils.h"
#include <iostream>
#include <sstream>
#include "grid.h"
#include "high_scores.h"
#include "score_entry.h"

using std::cout;
using std::vector;
using std::string;
using std::ostringstream;

void display_utils::draw_grid(const grid &g)
{
    cout << grid_to_string(g);
}

void display_utils::print_score(int score)
{
    cout << "Score: " << score << '\n';
}

void display_utils::print_high_scores()
{
    for(auto &entry : high_scores::get_entries())
    {
        cout << entry.player_name << ' ' << entry.score << '\n';
    }
}

std::string display_utils::grid_to_string(const grid &g)
{
    ostringstream oss;
    oss << string(g.get_width() + 2, border_symbol) << '\n';
    for(auto &row : g.get_contents())
    {
        oss << border_symbol;
        for(auto cell : row)
        {
            switch(cell)
            {
                case cell::EMPTY:
                    oss << empty_symbol;
                    break;
                case cell::SNAKE:
                    oss << "\033[33m" << snake_symbol << "\033[0m";
                    break;
                case cell::FOOD:
                    oss << "\033[31m" << food_symbol << "\033[0m";
                    break;
            }
        }
        oss << border_symbol << '\n';
    }
    oss << string(g.get_width() + 2, border_symbol) << '\n';
    return oss.str();
}
