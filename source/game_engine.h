#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <chrono>
#include <vector>
#include <functional>

class game_engine
{
    public:
        static bool tick_enabled;
        static std::vector<std::function<void ()>> start_functions;
        static std::vector<std::function<void ()>> tick_functions;

        static void run();
        static void stop();

    private:
        static constexpr auto frame_duration = std::chrono::milliseconds(64);
        static void start();
        static void tick();
};

#endif //GAME_ENGINE_H
