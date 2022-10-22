#pragma once

#include <iostream>

using std::string;

namespace argument_processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(string args[], int length) = 0;
    };
}
