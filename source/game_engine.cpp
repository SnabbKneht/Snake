#include "game_engine.h"
#include <thread>

bool game_engine::tick_enabled = true;

std::vector<std::function<void ()>> game_engine::start_functions;
std::vector<std::function<void ()>> game_engine::tick_functions;

void game_engine::run()
{
    start();

    while(tick_enabled)
    {
        tick();
        std::this_thread::sleep_for(frame_duration);
    }
}

void game_engine::stop()
{
    tick_enabled = false;
}

void game_engine::start()
{
    for(auto &f : start_functions)
        f();
}

void game_engine::tick()
{
    for(auto &f : tick_functions)
        f();
}
