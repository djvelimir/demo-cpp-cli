#pragma once

#include "processor/argument_processor_base.h"
#include "validator/argument_validator_base.h"
#include "generator/password_generator_base.h"
#include "display/terminal_base.h"

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
