#pragma once

#ifndef ARGUMENT_PROCESSOR_H
#define ARGUMENT_PROCESSOR_H

#include <string>
#include <vector>

#include "processor/argument_processor_base.h"
#include "validator/argument_validator_base.h"
#include "generator/password_generator_base.h"
#include "display/terminal_base.h"

namespace processor
{
    class ArgumentProcessor : public ArgumentProcessorBase
    {
    private:
        const validator::ArgumentValidatorBase &argumentValidator;

        const generator::PasswordGeneratorBase &passwordGenerator;

        const display::TerminalBase &terminal;

    public:
        ArgumentProcessor(const validator::ArgumentValidatorBase &argumentValidator, const generator::PasswordGeneratorBase &passwordGenerator, const display::TerminalBase &terminal);

        ~ArgumentProcessor() override = default;

        void Process(const std::vector<std::string> &args) const override;
    };
}

#endif // ARGUMENT_PROCESSOR_H
