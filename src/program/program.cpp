#include "program.h"

using std::move;
using std::string;
using std::unique_ptr;

namespace program
{
    Program::Program(unique_ptr<ArgumentProcessorBase> &argumentProcessor)
    {
        this->argumentProcessor = move(argumentProcessor);
    }

    Program::~Program() {}

    void Program::Start(string args[], int length)
    {
        argumentProcessor->Process(args, length);
    }
}
