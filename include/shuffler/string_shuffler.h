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
        std::mt19937 generator;

    public:
        StringShuffler();
        ~StringShuffler() override = default;

        std::string &Shuffle(std::string &characters) override;
    };
}
