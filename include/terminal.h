#ifndef Terminal_H
#define Terminal_H

#include "terminal-base.h"

class Terminal : public TerminalBase
{
    public:
        virtual ~Terminal();
        
        void Show(std::string message);
};

#endif