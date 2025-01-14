#include "snake.h"
#include <stdexcept>
#include "grid.h"

using std::out_of_range;

char snake::snake_symbol = 'O';

snake::snake(grid &g, int x, int y) : g(g), pos_x(x), pos_y(y)
{
    g.set(x, y, snake_symbol);
}

void snake::move(direction dir)
{
    try
    {
        switch(dir)
        {
            case direction::LEFT:
                g.set(pos_x - 1, pos_y, snake_symbol);
                break;
            case direction::RIGHT:
                g.set(pos_x + 1, pos_y, snake_symbol);
                break;
            case direction::UP:
                g.set(pos_x, pos_y - 1, snake_symbol);
                break;
            case direction::DOWN:
                g.set(pos_x, pos_y + 1, snake_symbol);
                break;
        }
    }
    catch(out_of_range &err) { return; }

    g.set(pos_x, pos_y, ' ');
    switch(dir)
    {
        case direction::LEFT:
            --pos_x;
            break;
        case direction::RIGHT:
            ++pos_x;
            break;
        case direction::UP:
            --pos_y;
            break;
        case direction::DOWN:
            ++pos_y;
            break;
    }
}
