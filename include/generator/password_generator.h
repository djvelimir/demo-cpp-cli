#pragma once

#include "generator/password_generator_base.h"
#include "shuffler/string_shuffler_base.h"
#include "generator/random_character_generator_base.h"

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
