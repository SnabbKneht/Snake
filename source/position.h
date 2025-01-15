#ifndef POSITION_H
#define POSITION_H

struct position
{
    position() = default;
    position(int x, int y) : x(x), y(y) {}

    int x = 0;
    int y = 0;
};

#endif //POSITION_H
