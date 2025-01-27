#include "high_scores.h"
#include "score_entry.h"
#include <fstream>
#include <sstream>
#include <algorithm>

using std::ifstream;
using std::ofstream;
using std::string;
using std::istringstream;
using std::ostringstream;

std::vector<score_entry> high_scores::entries;

void high_scores::save_score_if_high(score_entry entry)
{
    if(entries.size() < max_scores || entry.score > entries.back().score)
    {
        entries.push_back(entry);
        sort_scores();
        if(entries.size() > max_scores)
            entries.pop_back();
    }
}

void high_scores::load_file()
{
    entries.clear();
    ifstream in(file_path);
    string line;
    while(std::getline(in, line))
    {
        istringstream iss(line);
        string player_name;
        int score;
        iss >> player_name >> score;
        entries.emplace_back(player_name, score);
    }
    in.close();
}

void high_scores::save_file()
{
    ofstream out(file_path);
    for(auto &entry : entries)
    {
        out << entry.player_name << ' ' << entry.score << '\n';
    }
    out.close();
}

void high_scores::sort_scores()
{
    std::ranges::sort(entries, [](const score_entry &a, const score_entry &b)
    {
        return a.score > b.score;
    });
}
