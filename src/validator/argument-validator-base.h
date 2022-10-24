#pragma once

#include <iostream>

namespace validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(char *args[], int length) = 0;
    };
}
