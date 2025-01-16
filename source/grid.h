#ifndef GRID_H
#define GRID_H

#include <vector>
#include "cell.h"
#include "position.h"

class grid
{
    public:
        grid(int width, int height);

        void set(int x, int y, cell c);
        void set(position pos, cell c);
        cell get(position pos) const;
        std::vector<std::vector<cell>> get_contents() const { return contents; }
        std::vector<position> get_empty_cells_positions() const;
        int get_width() const { return width; }
        int get_height() const { return height; }

    private:
        int width = 0;
        int height = 0;
        std::vector<std::vector<cell>> contents;
};

#endif //GRID_H
