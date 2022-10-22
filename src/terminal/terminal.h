#pragma once

#include "terminal-base.h"

namespace terminal {
    class Terminal : public TerminalBase
    {
        public:
            virtual ~Terminal();

            void Show(std::string message);
    };
}
