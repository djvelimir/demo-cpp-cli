#pragma once

#include "argument-validator-base.h"

namespace argument_validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(char *args[], int length);
    };
}
