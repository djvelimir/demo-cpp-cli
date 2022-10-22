#include "password-generator.h"
#include <random>

using std::mt19937;
using std::random_device;
using std::shuffle;
using std::string;
using std::uniform_int_distribution;

namespace password_generator
{
    PasswordGenerator::PasswordGenerator()
    {
        PASSWORD_LENGTH = 16;
        UPPERCASE_CHARACTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        LOWERCASE_CHARACTERS = "abcdefghijklmnopqrstuvwxyz";
        DIGIT_CHARACTERS = "0123456789";
        SPECIAL_CHARACTERS = "~`!@#$%^&*()-_=+[{]}\\|;:\'\",<.>/?";
        UNION_OF_ALLOWED_CHARACTERS = UPPERCASE_CHARACTERS +
                                      LOWERCASE_CHARACTERS +
                                      DIGIT_CHARACTERS +
                                      SPECIAL_CHARACTERS;
    }

    PasswordGenerator::~PasswordGenerator(){};

    string PasswordGenerator::Generate()
    {
        string password;

        // generate at least one uppercase character
        password.append(1, GenerateRandomCharacter(UPPERCASE_CHARACTERS));

        // generate at least one lowercase character
        password.append(1, GenerateRandomCharacter(LOWERCASE_CHARACTERS));

        // generate at least one digit character
        password.append(1, GenerateRandomCharacter(DIGIT_CHARACTERS));

        // generate at least one special character
        password.append(1, GenerateRandomCharacter(SPECIAL_CHARACTERS));

        for (int i = 4; i < PASSWORD_LENGTH; i++)
        {
            // generate random character from union of allowed characters
            password.append(1, GenerateRandomCharacter(UNION_OF_ALLOWED_CHARACTERS));
        }

        // shuffle generated characters
        random_device rd;
        mt19937 gen(rd());
        shuffle(password.begin(), password.end(), gen);

        return password;
    }

    char PasswordGenerator::GenerateRandomCharacter(string characters)
    {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, characters.length() - 1);
        int randomIndex = dis(gen);

        return characters[randomIndex];
    }
}
