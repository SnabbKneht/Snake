#include "food_spawner.h"
#include "grid.h"
#include "my_random.h"

void food_spawner::spawn_food_at_random_position(grid &g)
{
    auto possible_positions = g.get_empty_cells_positions();
    auto random_pos = possible_positions[my_random::random_index(possible_positions.size())];
    g.set(random_pos, cell::FOOD);
}
