#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H
#include <chrono>

class game_engine
{
    public:
        static std::chrono::milliseconds frame_duration;
        static void start();
        static void tick();
};

#endif //GAME_ENGINE_H
