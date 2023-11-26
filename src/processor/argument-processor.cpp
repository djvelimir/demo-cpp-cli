#include "argument-processor.h"

using std::vector;
using std::string;
using std::unique_ptr;

namespace processor
{
    ArgumentProcessor::ArgumentProcessor(unique_ptr<ArgumentValidatorBase> &argumentValidator, unique_ptr<PasswordGeneratorBase> &passwordGenerator, unique_ptr<TerminalBase> &terminal)
    {
        this->argumentValidator = std::move(argumentValidator);
        this->passwordGenerator = std::move(passwordGenerator);
        this->terminal = std::move(terminal);
    }

    ArgumentProcessor::~ArgumentProcessor(){};

    void ArgumentProcessor::Process(const vector<string>& args)
    {
        if (!argumentValidator->Validate(args))
        {
            string usage = "Usage:\n./demo-cpp-cli generate password";
            terminal->Show(usage);
            return;
        }

        string password = passwordGenerator->Generate();
        terminal->Show(password);
    }
}
