#include "program.h"

namespace program {
    Program::Program(ArgumentProcessorBase* argumentProcessor) {
        this->argumentProcessor = argumentProcessor;
    }

    Program::~Program() {}

    void Program::Start(std::string args[], int length)
    {
        argumentProcessor->Process(args, length);
    }
}
