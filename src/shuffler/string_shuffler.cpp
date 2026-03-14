#include "shuffler/string_shuffler.h"
#include <algorithm>
#include <random>
#include <string>

using std::shuffle;
using std::string;

namespace shuffler
{
    StringShuffler::StringShuffler()
        : generator(randomDevice())
    {
    }

    string &StringShuffler::Shuffle(string &characters)
    {
        shuffle(characters.begin(), characters.end(), generator);
        return characters;
    }
}
