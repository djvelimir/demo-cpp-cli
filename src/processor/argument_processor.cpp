#include "processor/argument_processor.h"
#include <string>
#include <vector>

using display::TerminalBase;
using generator::PasswordGeneratorBase;
using std::string;
using std::vector;
using validator::ArgumentValidatorBase;

namespace processor
{
    ArgumentProcessor::ArgumentProcessor(const ArgumentValidatorBase &argumentValidator, const PasswordGeneratorBase &passwordGenerator, const TerminalBase &terminal)
        : argumentValidator(argumentValidator),
          passwordGenerator(passwordGenerator),
          terminal(terminal)
    {
    }

    void ArgumentProcessor::Process(const vector<string> &args) const
    {
        if (!argumentValidator.Validate(args))
        {
            const string usage = "Usage:\n./demo-cpp-cli generate password";
            terminal.Show(usage);
            return;
        }

        string password = passwordGenerator.Generate();
        terminal.Show(password);
    }
}
