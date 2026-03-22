#include "generator/random_character_generator.h"
#include <random>
#include <string>

using std::string;
using std::uniform_int_distribution;

namespace generator
{
    RandomCharacterGenerator::RandomCharacterGenerator()
        : generator(randomDevice())
    {
        uppercaseCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        lowercaseCharacters = "abcdefghijklmnopqrstuvwxyz";
        digitCharacters = "0123456789";
        specialCharacters = "~`!@#$%^&*()-_=+[{]}\\|;:\'\",<.>/?";
        allowedCharacters = uppercaseCharacters +
                            lowercaseCharacters +
                            digitCharacters +
                            specialCharacters;
    }

    char RandomCharacterGenerator::RandomFrom(const string &chars)
    {
        uniform_int_distribution<size_t> distribution(0, chars.size() - 1);
        return chars[distribution(generator)];
    }

    char RandomCharacterGenerator::GenerateUppercaseCharacter()
    {
        return RandomFrom(uppercaseCharacters);
    }

    char RandomCharacterGenerator::GenerateLowercaseCharacter()
    {
        return RandomFrom(lowercaseCharacters);
    }

    char RandomCharacterGenerator::GenerateDigitCharacter()
    {
        return RandomFrom(digitCharacters);
    }

    char RandomCharacterGenerator::GenerateSpecialCharacter()
    {
        return RandomFrom(specialCharacters);
    }

    char RandomCharacterGenerator::GenerateAllowedCharacter()
    {
        return RandomFrom(allowedCharacters);
    }
}
