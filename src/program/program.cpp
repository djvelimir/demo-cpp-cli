#include "program/program.h"
#include <string>
#include <vector>

using processor::ArgumentProcessorBase;
using std::string;
using std::vector;

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
