#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <chrono>
#include <vector>
#include <functional>
#include "game.h"

class game_engine
{
    public:
        static std::vector<std::function<void ()>> start_functions;
        static std::vector<std::function<void ()>> tick_functions;

        static void run();

    private:
        static const std::chrono::milliseconds frame_duration;
        static void start();
        static void tick();
};

#endif //GAME_ENGINE_H
