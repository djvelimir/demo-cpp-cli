#pragma once

#include "display/terminal_base.h"

namespace display
{
    class Terminal : public TerminalBase
    {
    public:
        ~Terminal() override = default;

        void Show(const std::string &message) const override;
    };
}
