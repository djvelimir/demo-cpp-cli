#pragma once

#include "argument-processor-base.h"
#include "../argument-validator/argument-validator-base.h"
#include "../password-generator/password-generator-base.h"
#include "../terminal/terminal-base.h"

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