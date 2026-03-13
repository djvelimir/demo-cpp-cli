#pragma once

#include <iostream>

namespace generator
{
    class RandomCharacterGeneratorBase
    {
    public:
        virtual ~RandomCharacterGeneratorBase();

        virtual char GenerateUppercaseCharacter() = 0;

        virtual char GenerateLowercaseCharacter() = 0;

        virtual char GenerateDigitCharacter() = 0;

        virtual char GenerateSpecialCharacter() = 0;

        virtual char GenerateAllowedCharacter() = 0;
    };
}
