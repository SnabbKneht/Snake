#ifndef FOOD_SPAWNER_H
#define FOOD_SPAWNER_H

class grid;

struct food_spawner
{
    static void spawn_food_at_random_position(grid &g);
};

#endif //FOOD_SPAWNER_H
