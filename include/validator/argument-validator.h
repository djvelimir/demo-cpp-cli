#pragma once

#include "argument-validator-base.h"

namespace validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(const vector<string> &args) const;
    };
}
