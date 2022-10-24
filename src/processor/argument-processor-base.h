#pragma once

#include <iostream>

namespace processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(char *args[], int length) = 0;
    };
}
