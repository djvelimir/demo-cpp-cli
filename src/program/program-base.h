#pragma once

#include <iostream>

using std::vector;
using std::string;

namespace program
{
    class ProgramBase
    {
    public:
        virtual ~ProgramBase();

        virtual void Start(const vector<string>& args) = 0;
    };
}
