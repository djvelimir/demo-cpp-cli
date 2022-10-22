#pragma once

#include "argument-validator-base.h"

using std::string;

namespace argument_validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(string args[], int length);
    };
}
