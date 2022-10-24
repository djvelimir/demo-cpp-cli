#pragma once

#include "argument-validator-base.h"

namespace validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(char *args[], int length);
    };
}
