#pragma once

#include <iostream>

using std::string;

namespace display
{
    class TerminalBase
    {
    public:
        virtual ~TerminalBase();

        virtual void Show(const string& message) = 0;
    };
}
