#pragma once

#include <string>
#include <vector>

#include "program/program_base.h"
#include "processor/argument_processor_base.h"

namespace program
{
    class Program : public ProgramBase
    {
    private:
        const processor::ArgumentProcessorBase &argumentProcessor;

    public:
        Program(const processor::ArgumentProcessorBase &argumentProcessor);

        ~Program() override = default;

        void Start(const std::vector<std::string> &args) const override;
    };
}
