#pragma once

#include "program-base.h"
#include "../argument_processor/argument-processor-base.h"

using argument_processor::ArgumentProcessorBase;
using std::string;
using std::unique_ptr;

namespace program
{
    class Program : public ProgramBase
    {
    private:
        unique_ptr<ArgumentProcessorBase> argumentProcessor;

    public:
        Program(unique_ptr<ArgumentProcessorBase> &argumentProcessor);

        virtual ~Program();

        void Start(string args[], int length);
    };
}
