#pragma once

#include <iostream>

namespace argument_processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(char *args[], int length) = 0;
    };
}
