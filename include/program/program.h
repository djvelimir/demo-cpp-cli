#pragma once

#include "program/program_base.h"
#include "processor/argument_processor_base.h"

using processor::ArgumentProcessorBase;

namespace program
{
    class Program : public ProgramBase
    {
    private:
        const ArgumentProcessorBase &argumentProcessor;

    public:
        Program(const ArgumentProcessorBase &argumentProcessor);

        virtual ~Program();

        void Start(const vector<string> &args) const;
    };
}
