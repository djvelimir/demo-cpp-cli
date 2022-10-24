#pragma once

#include "argument-processor-base.h"
#include "../validator/argument-validator-base.h"
#include "../generator/password-generator-base.h"
#include "../display/terminal-base.h"

using display::TerminalBase;
using generator::PasswordGeneratorBase;
using std::unique_ptr;
using validator::ArgumentValidatorBase;

namespace processor
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
