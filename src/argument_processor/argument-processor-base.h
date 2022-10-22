#pragma once

#include <iostream>

namespace argument_processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(std::string args[], int length) = 0;
    };
}
