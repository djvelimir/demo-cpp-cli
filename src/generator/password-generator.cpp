#include "generator/password-generator.h"

namespace generator
{
    PasswordGenerator::PasswordGenerator(StringShufflerBase &stringShuffler, RandomCharacterGeneratorBase &randomCharacterGenerator)
        : stringShuffler(stringShuffler),
          randomCharacterGenerator(randomCharacterGenerator)
    {
        this->passwordLength = 16;
    }

    PasswordGenerator::~PasswordGenerator() {};

    string PasswordGenerator::Generate() const
    {
        string password;

        password.append(1, randomCharacterGenerator.GenerateUppercaseCharacter());
        password.append(1, randomCharacterGenerator.GenerateLowercaseCharacter());
        password.append(1, randomCharacterGenerator.GenerateDigitCharacter());
        password.append(1, randomCharacterGenerator.GenerateSpecialCharacter());

        for (int i = 0; i < passwordLength - 4; i++)
        {
            password.append(1, randomCharacterGenerator.GenerateAllowedCharacter());
        }

        return stringShuffler.Shuffle(password);
    }
}
