cmake_minimum_required(VERSION 3.30)
project(Snake)

set(CMAKE_CXX_STANDARD 20)

add_executable(Snake source/main.cpp
        source/display_utils.cpp
        source/display_utils.h
        source/game_engine.cpp
        source/game_engine.h
        source/grid.cpp
        source/grid.h
        source/snake.cpp
        source/snake.h
        source/game.cpp
        source/game.h
        source/direction.h
        source/position.h)
