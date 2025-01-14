#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <chrono>
#include <vector>

class game_engine
{
    public:
        static std::vector<void (*) ()> start_functions;
        static std::vector<void (*) ()> tick_functions;
        static void run();

    private:
        static std::chrono::milliseconds frame_duration;
        static void start();
        static void tick();
};

#endif //GAME_ENGINE_H
