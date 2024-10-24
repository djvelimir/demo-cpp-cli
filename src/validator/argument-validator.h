#pragma once

#include "argument-validator-base.h"

using std::string;
using std::vector;

namespace validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(const vector<string> &args);
    };
}
