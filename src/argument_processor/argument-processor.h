#pragma once

#include "argument-processor-base.h"
#include "../argument_validator/argument-validator-base.h"
#include "../password_generator/password-generator-base.h"
#include "../terminal/terminal-base.h"

using argument_validator::ArgumentValidatorBase;
using password_generator::PasswordGeneratorBase;
using std::unique_ptr;
using terminal::TerminalBase;

namespace argument_processor
{
    class ArgumentProcessor : public ArgumentProcessorBase
    {
    private:
        unique_ptr<ArgumentValidatorBase> argumentValidator;

        unique_ptr<PasswordGeneratorBase> passwordGenerator;

        unique_ptr<TerminalBase> terminal;

    public:
        ArgumentProcessor(unique_ptr<ArgumentValidatorBase> &argumentValidator, unique_ptr<PasswordGeneratorBase> &passwordGenerator, unique_ptr<TerminalBase> &terminal);

        virtual ~ArgumentProcessor();

        void Process(char *args[], int length);
    };
}
