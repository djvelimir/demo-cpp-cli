#pragma once

#include "argument-validator-base.h"

using std::vector;
using std::string;

namespace validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidator();

        bool Validate(const vector<string>& args);
    };
}
