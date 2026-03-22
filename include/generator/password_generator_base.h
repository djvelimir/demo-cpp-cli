#pragma once

#ifndef PASSWORD_GENERATOR_BASE_H
#define PASSWORD_GENERATOR_BASE_H

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

#endif // PASSWORD_GENERATOR_BASE_H
