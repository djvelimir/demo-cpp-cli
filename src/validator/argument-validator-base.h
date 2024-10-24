#pragma once

#include <iostream>

using std::string;
using std::vector;

namespace validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(const vector<string> &args) = 0;
    };
}
