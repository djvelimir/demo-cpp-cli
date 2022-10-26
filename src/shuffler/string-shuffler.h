#pragma once

#include "string-shuffler-base.h"
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

        string Shuffle(string characters);
    };
}
