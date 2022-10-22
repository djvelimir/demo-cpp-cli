#pragma once

#include <iostream>

namespace argument_validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(std::string args[], int length) = 0;
    };
}
