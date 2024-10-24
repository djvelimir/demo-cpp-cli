#include "program.h"

using std::shared_ptr;
using std::string;
using std::vector;

namespace program
{
    Program::Program(shared_ptr<ArgumentProcessorBase> &argumentProcessor)
    {
        this->argumentProcessor = argumentProcessor;
    }

    Program::~Program() {}

    void Program::Start(const vector<string> &args)
    {
        argumentProcessor->Process(args);
    }
}
