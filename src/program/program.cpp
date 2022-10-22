#include "program.h"

using std::string;

namespace program
{
    Program::Program(ArgumentProcessorBase *argumentProcessor)
    {
        this->argumentProcessor = argumentProcessor;
    }

    Program::~Program() {}

    void Program::Start(string args[], int length)
    {
        argumentProcessor->Process(args, length);
    }
}
