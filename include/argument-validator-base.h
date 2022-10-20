#ifndef ArgumentValidatorBase_H
#define ArgumentValidatorBase_H

#include <iostream>

class ArgumentValidatorBase
{
    public:
        virtual ~ArgumentValidatorBase();
        
        virtual bool Validate(std::string args[], int length) = 0;
};

#endif