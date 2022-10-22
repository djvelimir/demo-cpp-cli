#pragma once

#include <iostream>

namespace terminal
{
    class TerminalBase
    {
    public:
        virtual ~TerminalBase();

        virtual void Show(std::string message) = 0;
    };
}
