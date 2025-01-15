#include "game.h"
#include <conio.h>
#include "game_engine.h"

game::game()
{
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
                if(m_snake.m_direction == direction::RIGHT) break;
                m_snake.m_direction = direction::LEFT;
                break;
            case 'd':
                if(m_snake.m_direction == direction::LEFT) break;
                m_snake.m_direction = direction::RIGHT;
                break;
            case 'w':
                if(m_snake.m_direction == direction::DOWN) break;
                m_snake.m_direction = direction::UP;
                break;
            case 's':
                if(m_snake.m_direction == direction::UP) break;
                m_snake.m_direction = direction::DOWN;
                break;
            default:
                ;
        }
    }
}
