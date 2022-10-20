#ifndef ArgumentProcessor_H
#define ArgumentProcessor_H

#include "argument-processor-base.h"
#include "argument-validator-base.h"
#include "password-generator-base.h"
#include "terminal-base.h"

class ArgumentProcessor : public ArgumentProcessorBase
{
    private:
        ArgumentValidatorBase* argumentValidator;
        
        PasswordGeneratorBase* passwordGenerator;
        
        TerminalBase* terminal;

    public:
        ArgumentProcessor(ArgumentValidatorBase* argumentValidator, PasswordGeneratorBase* passwordGenerator, TerminalBase* terminal);
        
        virtual ~ArgumentProcessor();

        void Process(std::string args[], int length);
};

#endif