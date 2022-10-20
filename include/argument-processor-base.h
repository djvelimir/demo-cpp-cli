#ifndef ArgumentProcessorBase_H
#define ArgumentProcessorBase_H

#include <iostream>

class ArgumentProcessorBase
{
    public:
        virtual ~ArgumentProcessorBase();
        
        virtual void Process(std::string args[], int length) = 0;
};

#endif