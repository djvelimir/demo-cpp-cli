#pragma once

#include "shuffler/string_shuffler_base.h"
#include <random>

using std::random_device;

namespace shuffler
{
    class StringShuffler : public StringShufflerBase
    {
    private:
        random_device randomDevice;

    public:
        virtual ~StringShuffler();

        string &Shuffle(string &characters);
    };
}
