#pragma once

#include "terminal-base.h"

using std::string;

namespace display
{
    class Terminal : public TerminalBase
    {
    public:
        virtual ~Terminal();

        void Show(string message);
    };
}
