#pragma once

#include <iostream>

using std::vector;
using std::string;

namespace processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(const vector<string>& args) = 0;
    };
}
