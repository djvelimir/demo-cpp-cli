#pragma once

#include <iostream>

using std::string;

namespace program
{
    class ProgramBase
    {
    public:
        virtual ~ProgramBase();

        virtual void Start(string args[], int length) = 0;
    };
}
