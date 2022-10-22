#pragma once

#include "argument-validator-base.h"

class ArgumentValidator : public ArgumentValidatorBase
{
    public:
        virtual ~ArgumentValidator();
        
        bool Validate(std::string args[], int length);
};