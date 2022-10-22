#include "program.h"

using std::move;
using std::unique_ptr;

namespace program
{
    Program::Program(unique_ptr<ArgumentProcessorBase> &argumentProcessor)
    {
        this->argumentProcessor = move(argumentProcessor);
    }

    Program::~Program() {}

    void Program::Start(char *args[], int length)
    {
        argumentProcessor->Process(args, length);
    }
}
