#include "argument-processor.h"

using std::move;
using std::string;
using std::unique_ptr;

namespace argument_processor
{
    ArgumentProcessor::ArgumentProcessor(unique_ptr<ArgumentValidatorBase> &argumentValidator, unique_ptr<PasswordGeneratorBase> &passwordGenerator, unique_ptr<TerminalBase> &terminal)
    {
        this->argumentValidator = move(argumentValidator);
        this->passwordGenerator = move(passwordGenerator);
        this->terminal = move(terminal);
    }

    ArgumentProcessor::~ArgumentProcessor(){};

    void ArgumentProcessor::Process(char *args[], int length)
    {
        if (!argumentValidator->Validate(args, length))
        {
            string usage = "Usage:\n./demo-cpp-cli generate password";
            terminal->Show(usage);
            return;
        }

        string password = passwordGenerator->Generate();
        terminal->Show(password);
    }
}
