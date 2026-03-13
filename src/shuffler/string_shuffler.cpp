#include "shuffler/string_shuffler.h"
#include <algorithm>
#include <random>
#include <string>

using std::mt19937;
using std::shuffle;
using std::string;

namespace shuffler
{
    StringShuffler::~StringShuffler() {}

    string &StringShuffler::Shuffle(string &characters)
    {
        mt19937 gen(randomDevice());
        shuffle(characters.begin(), characters.end(), gen);

        return characters;
    }
}
