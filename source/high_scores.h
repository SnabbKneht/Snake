#ifndef HIGH_SCORES_H
#define HIGH_SCORES_H

#include <string>
#include <vector>

struct score_entry;

class high_scores
{
    public:
        static void save_score_if_high(score_entry);
        static void load_file();
        static void save_file();
        static const std::vector<score_entry> &get_entries() { return entries; }

    private:
        static constexpr std::string file_path = "high_scores.txt";
        static constexpr int max_scores = 10;
        static std::vector<score_entry> entries;
        static void sort_scores();
};

#endif //HIGH_SCORES_H
