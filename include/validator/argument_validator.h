#pragma once

#include "validator/argument_validator_base.h"

namespace validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(const vector<string> &args) const;
    };
}
