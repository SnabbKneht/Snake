#ifndef SCORE_ENTRY_H
#define SCORE_ENTRY_H

#include <string>

struct score_entry
{
    score_entry() = default;
    score_entry(const std::string &player_name, int score) : player_name(player_name), score(score) {}

    std::string player_name = "Player";
    int score = 0;
};

#endif //SCORE_ENTRY_H
