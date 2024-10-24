#pragma once

#include <iostream>

using std::string;
using std::vector;

namespace program
{
    class ProgramBase
    {
    public:
        virtual ~ProgramBase();

        virtual void Start(const vector<string> &args) = 0;
    };
}
