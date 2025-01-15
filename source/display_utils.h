#ifndef DISPLAY_UTILS_H
#define DISPLAY_UTILS_H

#include <process.h>

class grid;

class display_utils
{
    public:
        static void clear_console() { system("cls"); }
        static void draw_grid_with_border(const grid &g);

    private:
        static constexpr char border_symbol = '#';
        static constexpr char snake_symbol = 'O';
        static constexpr char food_symbol = '*';
        static constexpr char empty_symbol = ' ';
};

#endif //DISPLAY_UTILS_H
