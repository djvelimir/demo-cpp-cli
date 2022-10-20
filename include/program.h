#ifndef Program_H
#define Program_H

#include "program-base.h"
#include "argument-processor.h"

class Program : public ProgramBase
{
    private:
        ArgumentProcessorBase* argumentProcessor;

    public:
        Program(ArgumentProcessorBase* argumentProcessor);

        virtual ~Program();

        void Start(std::string args[], int length);
};

#endif