#include "display_utils.h"
#include <iostream>
#include "grid.h"

using std::cout;
using std::vector;
using std::string;

char display_utils::border_symbol = '#';

void display_utils::draw_grid_with_border(const grid &g)
{
    cout << string(g.get_width() + 2, border_symbol) << '\n';
    for(auto &row : g.get_contents())
        cout << border_symbol << row << border_symbol << '\n';
    cout << string(g.get_width() + 2, border_symbol) << '\n';
}
