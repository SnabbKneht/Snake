#include "game_engine.h"
#include <chrono>
#include <thread>

const std::chrono::milliseconds game_engine::frame_duration = std::chrono::milliseconds(32);

std::vector<std::function<void ()>> game_engine::start_functions;
std::vector<std::function<void ()>> game_engine::tick_functions;

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
