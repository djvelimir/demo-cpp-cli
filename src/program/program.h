#pragma once

#include "program-base.h"
#include "../argument_processor/argument-processor-base.h"

using argument_processor::ArgumentProcessorBase;

namespace program
{
    class Program : public ProgramBase
    {
    private:
        ArgumentProcessorBase *argumentProcessor;

    public:
        Program(ArgumentProcessorBase *argumentProcessor);

        virtual ~Program();

        void Start(std::string args[], int length);
    };
}
