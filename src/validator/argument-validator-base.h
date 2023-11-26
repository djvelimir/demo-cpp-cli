#pragma once

#include <iostream>

using std::vector;
using std::string;

namespace validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(const vector<string>&  args) = 0;
    };
}
