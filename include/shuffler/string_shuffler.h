#pragma once

#include <string>
#include <random>

#include "shuffler/string_shuffler_base.h"

namespace shuffler
{
    class StringShuffler : public StringShufflerBase
    {
    private:
        std::random_device randomDevice;

    public:
        virtual ~StringShuffler();

        std::string &Shuffle(std::string &characters);
    };
}
