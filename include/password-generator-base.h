#ifndef PasswordGeneratorBase_H
#define PasswordGeneratorBase_H

#include <iostream>

class PasswordGeneratorBase
{
    public:
        virtual ~PasswordGeneratorBase();
        
        virtual std::string Generate() = 0;
};

#endif