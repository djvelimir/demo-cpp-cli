#pragma once

#include <iostream>

namespace password_generator
{
    class PasswordGeneratorBase
    {
    public:
        virtual ~PasswordGeneratorBase();

        virtual std::string Generate() = 0;
    };
}
