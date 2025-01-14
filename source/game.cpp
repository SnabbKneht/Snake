#include "game.h"
#include <conio.h>
#include "game_engine.h"

game::game()
{
    game_engine::start_functions.push_back([this] { this->tick(); });
    game_engine::tick_functions.push_back([this] { this->tick(); });
}

void game::tick()
{
    if(_kbhit())
    {
        char key = _getch();
        switch(key)
        {
            case 'a':
                m_snake.move_left();
                break;
            case 'd':
                m_snake.move_right();
                break;
            case 'w':
                m_snake.move_up();
                break;
            case 's':
                m_snake.move_down();
                break;
            default:
                ;
        }
    }
}
