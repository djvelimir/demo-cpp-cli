#pragma once

#include <iostream>

namespace program
{
    class ProgramBase
    {
    public:
        virtual ~ProgramBase();

        virtual void Start(char *args[], int length) = 0;
    };
}
