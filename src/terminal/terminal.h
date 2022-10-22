#pragma once

#include "terminal-base.h"

using std::string;

namespace terminal
{
    class Terminal : public TerminalBase
    {
    public:
        virtual ~Terminal();

        void Show(string message);
    };
}
