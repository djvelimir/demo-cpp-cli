#pragma once

#include "program-base.h"
#include "../argument-processor/argument-processor-base.h"

class Program : public ProgramBase
{
    private:
        ArgumentProcessorBase* argumentProcessor;

    public:
        Program(ArgumentProcessorBase* argumentProcessor);

        virtual ~Program();

        void Start(std::string args[], int length);
};