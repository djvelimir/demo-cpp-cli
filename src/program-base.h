#pragma once

#include <iostream>

class ProgramBase
{
    public:
        virtual ~ProgramBase();
        
        virtual void Start(std::string args[], int length) = 0;
};