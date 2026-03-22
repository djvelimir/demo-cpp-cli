#pragma once

#ifndef ARGUMENT_VALIDATOR_BASE_H
#define ARGUMENT_VALIDATOR_BASE_H

#include <string>
#include <vector>

namespace validator
{
    class ArgumentValidatorBase
    {
    public:
        virtual ~ArgumentValidatorBase() = default;

        virtual bool Validate(const std::vector<std::string> &args) const = 0;
    };
}

#endif // ARGUMENT_VALIDATOR_BASE_H
