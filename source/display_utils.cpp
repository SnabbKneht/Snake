#include "display_utils.h"
#include <iostream>
#include <sstream>
#include "grid.h"

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
                    oss << snake_symbol;
                    break;
                case cell::FOOD:
                    oss << food_symbol;
                    break;
            }
        }
        oss << border_symbol << '\n';
    }
    oss << string(g.get_width() + 2, border_symbol) << '\n';
    return oss.str();
}
