#pragma once

#include <iostream>

using std::string;
using std::vector;

namespace processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(const vector<string> &args) = 0;
    };
}
