#pragma once

#include <iostream>

using std::string;

namespace terminal
{
    class TerminalBase
    {
    public:
        virtual ~TerminalBase();

        virtual void Show(string message) = 0;
    };
}
