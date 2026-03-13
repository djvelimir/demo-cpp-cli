#pragma once

#include <string>

namespace display
{
    class TerminalBase
    {
    public:
        virtual ~TerminalBase();

        virtual void Show(const std::string &message) const = 0;
    };
}
