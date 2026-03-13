#pragma once

#include "generator/random_character_generator_base.h"
#include <random>

using std::random_device;
using std::string;

namespace generator
{
    class RandomCharacterGenerator : public RandomCharacterGeneratorBase
    {
    private:
        string uppercaseCharacters;

        string lowercaseCharacters;

        string digitCharacters;

        string specialCharacters;

        string allowedCharacters;

        random_device randomDevice;

    public:
        RandomCharacterGenerator();

        virtual ~RandomCharacterGenerator();

        char GenerateUppercaseCharacter();

        char GenerateLowercaseCharacter();

        char GenerateDigitCharacter();

        char GenerateSpecialCharacter();

        char GenerateAllowedCharacter();
    };
}
