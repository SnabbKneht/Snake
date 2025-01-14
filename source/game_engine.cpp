#include "game_engine.h"
#include <chrono>
#include <thread>

std::chrono::milliseconds game_engine::frame_duration = std::chrono::milliseconds(1000);

void game_engine::run()
{
    start();

    while(true)
    {
        tick();
        std::this_thread::sleep_for(frame_duration);
    }
}

void game_engine::start()
{
    for(auto f : start_functions)
        f();
}

void game_engine::tick()
{
    for(auto f : tick_functions)
        f();
}
