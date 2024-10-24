#include "password-generator.h"

using std::string;

namespace generator
{
    PasswordGenerator::PasswordGenerator(shared_ptr<StringShufflerBase> &stringShuffler, shared_ptr<RandomCharacterGeneratorBase> &randomCharacterGenerator)
    {
        this->passwordLength = 16;
        this->stringShuffler = stringShuffler;
        this->randomCharacterGenerator = randomCharacterGenerator;
    }

    PasswordGenerator::~PasswordGenerator() {};

    string PasswordGenerator::Generate()
    {
        string password;

        password.append(1, randomCharacterGenerator->GenerateUppercaseCharacter());
        password.append(1, randomCharacterGenerator->GenerateLowercaseCharacter());
        password.append(1, randomCharacterGenerator->GenerateDigitCharacter());
        password.append(1, randomCharacterGenerator->GenerateSpecialCharacter());

        for (int i = 0; i < passwordLength - 4; i++)
        {
            password.append(1, randomCharacterGenerator->GenerateAllowedCharacter());
        }

        return stringShuffler->Shuffle(password);
    }
}
