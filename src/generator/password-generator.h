#pragma once

#include "password-generator-base.h"
#include "../shuffler/string-shuffler-base.h"
#include "random-character-generator-base.h"

using generator::RandomCharacterGeneratorBase;
using shuffler::StringShufflerBase;
using std::string;
using std::unique_ptr;

namespace generator
{
    class PasswordGenerator : public PasswordGeneratorBase
    {
    private:
        int passwordLength;

        unique_ptr<StringShufflerBase> stringShuffler;

        unique_ptr<RandomCharacterGeneratorBase> randomCharacterGenerator;

    public:
        PasswordGenerator(unique_ptr<StringShufflerBase> &stringShuffler, unique_ptr<RandomCharacterGeneratorBase> &randomCharacterGenerator);

        virtual ~PasswordGenerator();

        string Generate();
    };
}
