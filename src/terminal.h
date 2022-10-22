#pragma once

#include "terminal-base.h"

class Terminal : public TerminalBase
{
    public:
        virtual ~Terminal();
        
        void Show(std::string message);
};