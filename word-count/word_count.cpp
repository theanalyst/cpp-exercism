#include "word_count.h"
#include <algorithm>
#include <cctype>
#include <iterator>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

vector<string> split_words(string text){
    
}

namespace word_count
{

map<string, int> words(string const& text)
{
    map<string, int> count;
    for (auto const& word : split_words(text))
    {
        if (!word.empty())
        {
            ++count[word];
        }
    }
    return count;
}

}
