#pragma once

#include "argument-processor-base.h"
#include "../validator/argument-validator-base.h"
#include "../generator/password-generator-base.h"
#include "../display/terminal-base.h"

using display::TerminalBase;
using generator::PasswordGeneratorBase;
using std::shared_ptr;
using std::string;
using std::vector;
using validator::ArgumentValidatorBase;

namespace processor
{
    class ArgumentProcessor : public ArgumentProcessorBase
    {
    private:
        shared_ptr<ArgumentValidatorBase> argumentValidator;

        shared_ptr<PasswordGeneratorBase> passwordGenerator;

        shared_ptr<TerminalBase> terminal;

    public:
        ArgumentProcessor(shared_ptr<ArgumentValidatorBase> &argumentValidator, shared_ptr<PasswordGeneratorBase> &passwordGenerator, shared_ptr<TerminalBase> &terminal);

        virtual ~ArgumentProcessor();

        void Process(const vector<string> &args);
    };
}
