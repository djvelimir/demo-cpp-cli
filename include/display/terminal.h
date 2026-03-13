#pragma once

#include "terminal-base.h"

namespace display
{
    class Terminal : public TerminalBase
    {
    public:
        virtual ~Terminal();

        void Show(const string &message) const;
    };
}
