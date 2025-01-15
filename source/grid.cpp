#include "grid.h"
#include <stdexcept>

using std::vector;
using std::string;
using std::out_of_range;

grid::grid(int width, int height) : width(width), height(height)
{
    contents = vector(height, string(width, ' '));
}

void grid::set(int x, int y, char c)
{
    if(x < 0 || x >= width || y < 0 || y >= height) throw out_of_range("Grid index out of range.");
    contents[y][x] = c;
}

void grid::set(position pos, char c)
{
    if(pos.x < 0 || pos.x >= width || pos.y < 0 || pos.y >= height) throw out_of_range("Grid index out of range.");
    contents[pos.y][pos.x] = c;
}
