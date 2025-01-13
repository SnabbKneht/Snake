#ifndef DISPLAY_UTILS_H
#define DISPLAY_UTILS_H

#include <process.h>
#include <string>
#include <vector>

class display_utils
{
    public:
        static void clear_console() { system("cls"); }
        static std::vector<std::string> generate_window(int width, int height);
        static void draw_window(std::vector<std::string> &window);
};

#endif //DISPLAY_UTILS_H
