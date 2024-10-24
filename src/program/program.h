#pragma once

#include "program-base.h"
#include "../processor/argument-processor-base.h"

using processor::ArgumentProcessorBase;
using std::shared_ptr;
using std::string;
using std::vector;

namespace program
{
    class Program : public ProgramBase
    {
    private:
        shared_ptr<ArgumentProcessorBase> argumentProcessor;

    public:
        Program(shared_ptr<ArgumentProcessorBase> &argumentProcessor);

        virtual ~Program();

        void Start(const vector<string> &args);
    };
}
