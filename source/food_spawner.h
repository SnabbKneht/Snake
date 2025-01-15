#ifndef FOOD_SPAWNER_H
#define FOOD_SPAWNER_H

class grid;

class food_spawner
{
    public:
        explicit food_spawner(grid &g) : m_grid(g) {}

    private:
        grid &m_grid;
};

#endif //FOOD_SPAWNER_H
