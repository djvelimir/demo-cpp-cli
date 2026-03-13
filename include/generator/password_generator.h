#pragma once

#include <string>

#include "generator/password_generator_base.h"
#include "generator/random_character_generator_base.h"
#include "shuffler/string_shuffler_base.h"

namespace generator
{
    class PasswordGenerator : public PasswordGeneratorBase
    {
    private:
        int passwordLength;

        shuffler::StringShufflerBase &stringShuffler;

        RandomCharacterGeneratorBase &randomCharacterGenerator;

    public:
        PasswordGenerator(shuffler::StringShufflerBase &stringShuffler, generator::RandomCharacterGeneratorBase &randomCharacterGenerator);

        virtual ~PasswordGenerator();

        std::string Generate() const;
    };
}
