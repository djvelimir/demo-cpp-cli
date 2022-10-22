#pragma once

#include <iostream>

class PasswordGeneratorBase
{
    public:
        virtual ~PasswordGeneratorBase();
        
        virtual std::string Generate() = 0;
};