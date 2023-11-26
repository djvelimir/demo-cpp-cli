#include "program.h"

using std::unique_ptr;
using std::vector;
using std::string;

namespace program
{
    Program::Program(unique_ptr<ArgumentProcessorBase> &argumentProcessor)
    {
        this->argumentProcessor = std::move(argumentProcessor);
    }

    Program::~Program() {}

    void Program::Start(const vector<string>& args)
    {
        argumentProcessor->Process(args);
    }
}
