#pragma once

#include <string>

namespace generator
{
    class PasswordGeneratorBase
    {
    public:
        virtual ~PasswordGeneratorBase() = default;

        virtual std::string Generate() const = 0;
    };
}
