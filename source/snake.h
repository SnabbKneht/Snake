#ifndef SNAKE_H
#define SNAKE_H

#include "direction.h"

class grid;

class snake
{
    public:
        snake(grid &g, int x, int y);

        void move(direction);

    private:
        grid &g;
        int pos_x;
        int pos_y;

        static char snake_symbol;
};

#endif //SNAKE_H
