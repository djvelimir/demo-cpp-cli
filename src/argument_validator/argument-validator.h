#pragma once

#include "argument-validator-base.h"

namespace argument_validator {
    class ArgumentValidator : public ArgumentValidatorBase
    {
        public:
            virtual ~ArgumentValidator();

            bool Validate(std::string args[], int length);
    };
}
