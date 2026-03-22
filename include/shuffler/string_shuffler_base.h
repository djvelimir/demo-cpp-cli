#pragma once

#ifndef STRING_SHUFFLER_BASE_H
#define STRING_SHUFFLER_BASE_H

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

#endif // STRING_SHUFFLER_BASE_H
