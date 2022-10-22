#pragma once

#include "argument-processor-base.h"
#include "../argument_validator/argument-validator-base.h"
#include "../password_generator/password-generator-base.h"
#include "../terminal/terminal-base.h"

using argument_validator::ArgumentValidatorBase;
using password_generator::PasswordGeneratorBase;
using terminal::TerminalBase;

namespace argument_processor
{
    class ArgumentProcessor : public ArgumentProcessorBase
    {
    private:
        ArgumentValidatorBase *argumentValidator;

        PasswordGeneratorBase *passwordGenerator;

        TerminalBase *terminal;

    public:
        ArgumentProcessor(ArgumentValidatorBase *argumentValidator, PasswordGeneratorBase *passwordGenerator, TerminalBase *terminal);

        virtual ~ArgumentProcessor();

        void Process(std::string args[], int length);
    };
}
