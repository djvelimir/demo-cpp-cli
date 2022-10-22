#pragma once

#include <iostream>

namespace argument_validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(char *args[], int length) = 0;
    };
}
