#ifndef GRID_H
#define GRID_H

#include <vector>
#include <string>

class grid
{
    public:
        grid(int width, int height);
        void set(int x, int y, char c);
        std::vector<std::string> get_contents() const { return contents; }
        int get_width() const { return width; }
        int get_height() const { return height; }

    private:
        int width = 0;
        int height = 0;
        std::vector<std::string> contents;
};

#endif //GRID_H
