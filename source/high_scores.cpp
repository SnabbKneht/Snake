#include "high_scores.h"
#include "score_entry.h"
#include <fstream>
#include <sstream>

using std::ifstream;
using std::ofstream;
using std::string;
using std::istringstream;
using std::ostringstream;

std::vector<score_entry> high_scores::entries;

void high_scores::save_score_if_high(score_entry entry)
{
    if(entries.size() < max_scores)
    {
        push_at_proper_index(entry);
    }
    else if(entry.score > entries.back().score)
    {
        push_at_proper_index(entry);
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

void high_scores::push_at_proper_index(score_entry new_entry)
{
    score_entry temp;
    for(int i = 0; i < entries.size(); ++i)
    {
        if(entries[i].score >= new_entry.score) continue;
        entries.push_back(entries.back());
        for(int j = entries.size() - 2; j > i; --j)
        {
            entries[j] = entries[j - 1];
        }
        entries[i] = new_entry;
        break;
    }
}
