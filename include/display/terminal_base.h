#pragma once

#ifndef TERMINAL_BASE_H
#define TERMINAL_BASE_H

#include <string>

namespace display
{
    class TerminalBase
    {
    public:
        virtual ~TerminalBase() = default;

        virtual void Show(const std::string &message) const = 0;
    };
}

#endif // TERMINAL_BASE_H
