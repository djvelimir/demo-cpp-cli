#pragma once

#include "password-generator-base.h"

using std::string;

namespace generator
{
    class PasswordGenerator : public PasswordGeneratorBase
    {
    private:
        int PASSWORD_LENGTH;

        string UPPERCASE_CHARACTERS;

        string LOWERCASE_CHARACTERS;

        string DIGIT_CHARACTERS;

        string SPECIAL_CHARACTERS;

        string UNION_OF_ALLOWED_CHARACTERS;

        static char GetRandomCharacter(string characters);

        static string Shuffle(string stringToShuffle);

    public:
        PasswordGenerator();

        virtual ~PasswordGenerator();

        string Generate();
    };
}
