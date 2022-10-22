#pragma once

#include <iostream>

class TerminalBase
{
    public:
        virtual ~TerminalBase();
        
        virtual void Show(std::string message) = 0;
};