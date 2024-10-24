#include "string-shuffler.h"
#include <random>

using std::mt19937;
using std::shuffle;

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
