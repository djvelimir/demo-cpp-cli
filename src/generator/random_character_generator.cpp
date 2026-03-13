#include "generator/random_character_generator.h"
#include <random>
#include <string>

using std::mt19937;
using std::uniform_int_distribution;

namespace generator
{
    RandomCharacterGenerator::RandomCharacterGenerator()
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

    RandomCharacterGenerator::~RandomCharacterGenerator() {}

    char RandomCharacterGenerator::GenerateUppercaseCharacter()
    {
        mt19937 gen(randomDevice());
        uniform_int_distribution<size_t> dis(0, uppercaseCharacters.length() - 1);
        size_t randomIndex = dis(gen);

        return uppercaseCharacters[randomIndex];
    }

    char RandomCharacterGenerator::GenerateLowercaseCharacter()
    {
        mt19937 gen(randomDevice());
        uniform_int_distribution<size_t> dis(0, lowercaseCharacters.length() - 1);
        size_t randomIndex = dis(gen);

        return lowercaseCharacters[randomIndex];
    }

    char RandomCharacterGenerator::GenerateDigitCharacter()
    {
        mt19937 gen(randomDevice());
        uniform_int_distribution<size_t> dis(0, digitCharacters.length() - 1);
        size_t randomIndex = dis(gen);

        return digitCharacters[randomIndex];
    }

    char RandomCharacterGenerator::GenerateSpecialCharacter()
    {
        mt19937 gen(randomDevice());
        uniform_int_distribution<size_t> dis(0, specialCharacters.length() - 1);
        size_t randomIndex = dis(gen);

        return specialCharacters[randomIndex];
    }

    char RandomCharacterGenerator::GenerateAllowedCharacter()
    {
        mt19937 gen(randomDevice());
        uniform_int_distribution<size_t> dis(0, allowedCharacters.length() - 1);
        size_t randomIndex = dis(gen);

        return allowedCharacters[randomIndex];
    }
}
