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

        std::mt19937 generator;

        char RandomFrom(const std::string &chars);

    public:
        RandomCharacterGenerator();

        ~RandomCharacterGenerator() override = default;

        char GenerateUppercaseCharacter() override;

        char GenerateLowercaseCharacter() override;

        char GenerateDigitCharacter() override;

        char GenerateSpecialCharacter() override;

        char GenerateAllowedCharacter() override;
    };
}
