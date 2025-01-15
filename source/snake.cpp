#include "snake.h"
#include <stdexcept>

#include "game_engine.h"
#include "grid.h"

using std::out_of_range;
using std::invalid_argument;

snake::snake(grid &g, position pos, int length) : m_grid(g)
{
    if(length <= 0) throw invalid_argument("Cannot construct a snake with length 0 or less.");

    for(int i = 0; i < length; ++i)
    {
        g.set(pos, cell::SNAKE);
        body.push_back(pos);
        --pos.x;
    }

    game_engine::tick_functions.push_back([this] { this->move(); });
}

void snake::move()
{
    position next_head = body.front();
    switch(m_direction)
    {
        case direction::LEFT:
            --next_head.x;
            break;
        case direction::RIGHT:
            ++next_head.x;
            break;
        case direction::UP:
            --next_head.y;
            break;
        case direction::DOWN:
            ++next_head.y;
            break;
    }
    try
    {
        m_grid.set(next_head, cell::SNAKE);
    }
    catch(out_of_range &err) { return; }

    m_grid.set(body.back(), cell::EMPTY);
    body.push_front(next_head);
    body.pop_back();
}
