#include "display_utils.h"
#include <iostream>

using std::cout;
using std::vector;
using std::string;

std::vector<std::string> display_utils::generate_window(int width, int height)
{
    vector<string> window;
    window.push_back(string(width, '#'));
    for(int row = 1; row < height - 1; ++row)
    {
        string line = '#' + string(width - 2, ' ') + '#';
        window.push_back(line);
    }
    window.push_back(string(width, '#'));
    return window;
}

void display_utils::draw_window(std::vector<std::string> &window)
{
    for(string &row : window)
    {
        cout << row << '\n';
    }
}
