#pragma once

#include "password-generator-base.h"
#include "../shuffler/string-shuffler-base.h"
#include "random-character-generator-base.h"

using generator::RandomCharacterGeneratorBase;
using shuffler::StringShufflerBase;

namespace generator
{
    class PasswordGenerator : public PasswordGeneratorBase
    {
    private:
        int passwordLength;

        StringShufflerBase &stringShuffler;

        RandomCharacterGeneratorBase &randomCharacterGenerator;

    public:
        PasswordGenerator(StringShufflerBase &stringShuffler, RandomCharacterGeneratorBase &randomCharacterGenerator);

        virtual ~PasswordGenerator();

        string Generate() const;
    };
}
