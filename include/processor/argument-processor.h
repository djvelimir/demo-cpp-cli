#pragma once

#include "argument-processor-base.h"
#include "../validator/argument-validator-base.h"
#include "../generator/password-generator-base.h"
#include "../display/terminal-base.h"

using display::TerminalBase;
using generator::PasswordGeneratorBase;
using validator::ArgumentValidatorBase;

namespace processor
{
    class ArgumentProcessor : public ArgumentProcessorBase
    {
    private:
        const ArgumentValidatorBase &argumentValidator;

        const PasswordGeneratorBase &passwordGenerator;

        const TerminalBase &terminal;

    public:
        ArgumentProcessor(const ArgumentValidatorBase &argumentValidator, const PasswordGeneratorBase &passwordGenerator, const TerminalBase &terminal);

        virtual ~ArgumentProcessor();

        void Process(const vector<string> &args) const;
    };
}
