#pragma once

#include "program-base.h"
#include "../argument_processor/argument-processor-base.h"

using argument_processor::ArgumentProcessorBase;
using std::string;

namespace program
{
    class Program : public ProgramBase
    {
    private:
        ArgumentProcessorBase *argumentProcessor;

    public:
        Program(ArgumentProcessorBase *argumentProcessor);

        virtual ~Program();

        void Start(string args[], int length);
    };
}
