#ifndef SNAKE_H
#define SNAKE_H

class grid;

class snake
{
    public:
        snake(grid &g, int x, int y);

        void move_left();
        void move_right();
        void move_up();
        void move_down();

    private:
        grid &g;
        int pos_x;
        int pos_y;

        static char snake_symbol;
};

#endif //SNAKE_H
