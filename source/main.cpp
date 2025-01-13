#include <iostream>
#include <thread>
#include "game_engine.h"

using std::cout;

int main()
{
    game_engine::start();

    while(true)
    {
        game_engine::tick();
        std::this_thread::sleep_for(game_engine::frame_duration);
    }
}
