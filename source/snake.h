#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "direction.h"
#include "position.h"

class grid;

class snake
{
    public:
        snake(grid &g, position pos, int length);

        direction m_direction = direction::RIGHT;

    private:
        grid &m_grid;
        std::deque<position> body;
        void move();
};

#endif //SNAKE_H
