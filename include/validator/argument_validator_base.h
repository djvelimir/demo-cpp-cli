#pragma once

#include <string>
#include <vector>

namespace validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase();

        virtual bool Validate(const std::vector<std::string> &args) const = 0;
    };
}
