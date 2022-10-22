#include "password-generator.h"

namespace password_generator {
    PasswordGenerator::PasswordGenerator() {
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

    PasswordGenerator::~PasswordGenerator() {};

    std::string PasswordGenerator::Generate()
    {
        srand(time(0));

        std::string password;

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
        random_shuffle(password.begin(), password.end());

        return password;
    }

    char PasswordGenerator::GenerateRandomCharacter(std::string characters)
    {
        int randomIndex = rand() % characters.length();
        return characters[randomIndex];
    }
}
