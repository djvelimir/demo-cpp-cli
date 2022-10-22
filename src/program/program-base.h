#pragma once

#include <iostream>

namespace program {
    class ProgramBase
    {
        public:
            virtual ~ProgramBase();

            virtual void Start(std::string args[], int length) = 0;
    };
}
