#include "snake.h"
#include <stdexcept>
#include "grid.h"

using std::out_of_range;

char snake::snake_symbol = '@';

snake::snake(grid &g, int x, int y) : g(g), pos_x(x), pos_y(y)
{
    g.set(x, y, snake_symbol);
}

void snake::move_left()
{
    try
    {
        g.set(pos_x - 1, pos_y, snake_symbol);
    }
    catch(out_of_range &err) { return; }
    g.set(pos_x, pos_y, ' ');
    --pos_x;
}

void snake::move_right()
{
    try
    {
        g.set(pos_x + 1, pos_y, snake_symbol);
    }
    catch(out_of_range &err) { return; }
    g.set(pos_x, pos_y, ' ');
    ++pos_x;
}

void snake::move_up()
{
    try
    {
        g.set(pos_x, pos_y - 1, snake_symbol);
    }
    catch(out_of_range &err) { return; }
    g.set(pos_x, pos_y, ' ');
    --pos_y;
}

void snake::move_down()
{
    try
    {
        g.set(pos_x, pos_y + 1, snake_symbol);
    }
    catch(out_of_range &err) { return; }
    g.set(pos_x, pos_y, ' ');
    ++pos_y;
}
