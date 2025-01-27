#ifndef DISPLAY_UTILS_H
#define DISPLAY_UTILS_H

#include <iostream>
#include <string>

class grid;

class display_utils
{
    public:
        static void reset_console_cursor() { std::cout << "\033[H"; }
        static void draw_grid(const grid &g);
        static void print_score(int score);
        static void print_high_scores();

    private:
        static std::string grid_to_string(const grid &g);
        static constexpr char border_symbol = '#';
        static constexpr char snake_symbol = 'O';
        static constexpr char food_symbol = '*';
        static constexpr char empty_symbol = ' ';
};

#endif //DISPLAY_UTILS_H
