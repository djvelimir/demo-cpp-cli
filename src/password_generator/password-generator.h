#pragma once

#include "password-generator-base.h"

namespace password_generator
{
    class PasswordGenerator : public PasswordGeneratorBase
    {
    private:
        int PASSWORD_LENGTH;
        std::string UPPERCASE_CHARACTERS;
        std::string LOWERCASE_CHARACTERS;
        std::string DIGIT_CHARACTERS;
        std::string SPECIAL_CHARACTERS;
        std::string UNION_OF_ALLOWED_CHARACTERS;

        char GenerateRandomCharacter(std::string characters);

    public:
        PasswordGenerator();

        virtual ~PasswordGenerator();

        std::string Generate();
    };
}
