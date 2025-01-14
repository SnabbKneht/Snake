#ifndef DISPLAY_UTILS_H
#define DISPLAY_UTILS_H

#include <process.h>
#include <string>
#include <vector>

class grid;

class display_utils
{
    public:
        static void clear_console() { system("cls"); }
        static void draw_grid_with_border(grid &g);

    private:
        static char border_symbol;
};

#endif //DISPLAY_UTILS_H
