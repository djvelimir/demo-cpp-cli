#ifndef ArgumentValidator_H
#define ArgumentValidator_H

#include "argument-validator-base.h"

class ArgumentValidator : public ArgumentValidatorBase
{
    public:
        virtual ~ArgumentValidator();
        
        bool Validate(std::string args[], int length);
};

#endif