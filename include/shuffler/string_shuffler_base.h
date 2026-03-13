#pragma once

#include <iostream>

using std::string;

namespace shuffler
{
    class StringShufflerBase
    {
    public:
        virtual ~StringShufflerBase();

        virtual string &Shuffle(string &characters) = 0;
    };
}
