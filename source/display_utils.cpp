#include "display_utils.h"
#include <iostream>
#include "grid.h"

using std::cout;
using std::vector;
using std::string;

void display_utils::draw_grid_with_border(const grid &g)
{
    cout << string(g.get_width() + 2, border_symbol) << '\n';
    for(auto &row : g.get_contents())
    {
        cout << border_symbol;
        for(auto cell : row)
        {
            switch(cell)
            {
                case cell::EMPTY:
                    cout << empty_symbol;
                    break;
                case cell::SNAKE:
                    cout << snake_symbol;
                    break;
                case cell::FOOD:
                    cout << food_symbol;
                    break;
            }
        }
        cout << border_symbol << '\n';
    }
    cout << string(g.get_width() + 2, border_symbol) << '\n';
}
