#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <chrono>
#include <vector>
#include "game.h"

class game_engine
{
    public:
        // requires member functions of game class. For now, I don't know how to make it universal
        static std::vector<void (game::*) ()> start_functions;
        static std::vector<void (game::*) ()> tick_functions;

        static void run();

    private:
        static std::chrono::milliseconds frame_duration;
        static void start();
        static void tick();
};

#endif //GAME_ENGINE_H
