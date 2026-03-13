#include "program/program.h"

namespace program
{
    Program::Program(const ArgumentProcessorBase &argumentProcessor)
        : argumentProcessor(argumentProcessor)
    {
    }

    Program::~Program() {}

    void Program::Start(const vector<string> &args) const
    {
        argumentProcessor.Process(args);
    }
}
