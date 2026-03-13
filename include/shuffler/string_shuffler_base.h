#pragma once

#include <string>

namespace shuffler
{
    class StringShufflerBase
    {
    public:
        virtual ~StringShufflerBase() = default;

        virtual std::string &Shuffle(std::string &characters) = 0;
    };
}
