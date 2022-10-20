#ifndef TerminalBase_H
#define TerminalBase_H

#include <iostream>

class TerminalBase
{
    public:
        virtual ~TerminalBase();
        
        virtual void Show(std::string message) = 0;
};

#endif