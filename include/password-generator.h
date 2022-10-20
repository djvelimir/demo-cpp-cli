#ifndef PasswordGenerator_H
#define PasswordGenerator_H

#include "password-generator-base.h"

class PasswordGenerator : public PasswordGeneratorBase
{
    public:
        virtual ~PasswordGenerator();
        
        std::string Generate();
};

#endif