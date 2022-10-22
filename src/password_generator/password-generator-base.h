#pragma once

#include <iostream>

using std::string;

namespace password_generator
{
    class PasswordGeneratorBase
    {
    public:
        virtual ~PasswordGeneratorBase();

        virtual string Generate() = 0;
    };
}
