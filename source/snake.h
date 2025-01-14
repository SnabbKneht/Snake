#ifndef SNAKE_H
#define SNAKE_H

#include "direction.h"

class grid;

class snake
{
    public:
        snake(grid &g, int x, int y);

        direction m_direction = direction::RIGHT;

    private:
        grid &g;
        int pos_x;
        int pos_y;
        void move();

        static char snake_symbol;
};

#endif //SNAKE_H
