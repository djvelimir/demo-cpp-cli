#pragma once

#include <iostream>

using std::string;

namespace argument_validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(string args[], int length) = 0;
    };
}
