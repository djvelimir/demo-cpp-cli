#pragma once

#include "password-generator-base.h"

using std::string;

namespace password_generator
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

        char GenerateRandomCharacter(string characters);

    public:
        PasswordGenerator();

        virtual ~PasswordGenerator();

        string Generate();
    };
}
