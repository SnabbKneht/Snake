#ifndef DISPLAY_UTILS_H
#define DISPLAY_UTILS_H

#include <process.h>
#include <string>

class grid;

class display_utils
{
    public:
        static void clear_console() { system("cls"); }
        static void draw_grid(const grid &g);

    private:
        static std::string grid_to_string(const grid &g);
        static constexpr char border_symbol = '#';
        static constexpr char snake_symbol = 'O';
        static constexpr char food_symbol = '*';
        static constexpr char empty_symbol = ' ';
};

#endif //DISPLAY_UTILS_H
