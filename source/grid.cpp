#include "grid.h"
#include <stdexcept>

using std::vector;
using std::string;
using std::out_of_range;

grid::grid(int width, int height) : width(width), height(height)
{
    contents = vector(height, vector(width, cell::EMPTY));
}

void grid::set(int x, int y, cell c)
{
    if(x < 0 || x >= width || y < 0 || y >= height) throw out_of_range("Grid index out of range.");
    contents[y][x] = c;
}

void grid::set(position pos, cell c)
{
    if(pos.x < 0 || pos.x >= width || pos.y < 0 || pos.y >= height) throw out_of_range("Grid index out of range.");
    contents[pos.y][pos.x] = c;
}

cell grid::get(position pos) const
{
    if(pos.x < 0 || pos.x >= width || pos.y < 0 || pos.y >= height) throw out_of_range("Grid index out of range.");
    return contents[pos.y][pos.x];
}

std::vector<position> grid::get_empty_cells_positions() const
{
    vector<position> result;
    for(int y = 0; y < height; ++y)
    {
        for(int x = 0; x < width; ++x)
        {
            if(contents[y][x] == cell::EMPTY)
                result.push_back(position(x, y));
        }
    }
    return result;
}
