#ifndef GAME_H
#define GAME_H

#include "game_engine.h"
#include "grid.h"
#include "snake.h"

class game
{
    public:
        game();

        grid m_grid = grid(50, 20);
        snake m_snake = snake(m_grid, position(15, 5), 3);

        void handle_input();
};

#endif //GAME_H
