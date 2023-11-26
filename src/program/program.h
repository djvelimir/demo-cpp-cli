#pragma once

#include "program-base.h"
#include "../processor/argument-processor-base.h"

using processor::ArgumentProcessorBase;
using std::unique_ptr;
using std::vector;
using std::string;

namespace program
{
    class Program : public ProgramBase
    {
    private:
        unique_ptr<ArgumentProcessorBase> argumentProcessor;

    public:
        Program(unique_ptr<ArgumentProcessorBase> &argumentProcessor);

        virtual ~Program();

        void Start(const vector<string>& args);
    };
}
