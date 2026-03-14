#pragma once

#include "validator/argument_validator_base.h"

namespace validator
{
    class ArgumentValidator : public ArgumentValidatorBase
    {
    public:
        ~ArgumentValidator() override = default;

        bool Validate(const std::vector<std::string> &args) const override;
    };
}
