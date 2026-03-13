#pragma once

#include <string>

namespace generator
{
    class PasswordGeneratorBase
    {
    public:
        virtual ~PasswordGeneratorBase();

        virtual std::string Generate() const = 0;
    };
}
