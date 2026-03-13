#pragma once

#include <string>
#include <random>

#include "generator/random_character_generator_base.h"

namespace generator
{
    class RandomCharacterGenerator : public RandomCharacterGeneratorBase
    {
    private:
        std::string uppercaseCharacters;

        std::string lowercaseCharacters;

        std::string digitCharacters;

        std::string specialCharacters;

        std::string allowedCharacters;

        std::random_device randomDevice;

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
