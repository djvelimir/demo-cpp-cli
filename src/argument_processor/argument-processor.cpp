#include "argument-processor.h"

using std::string;

namespace argument_processor
{
    ArgumentProcessor::ArgumentProcessor(ArgumentValidatorBase *argumentValidator, PasswordGeneratorBase *passwordGenerator, TerminalBase *terminal)
    {
        this->argumentValidator = argumentValidator;
        this->passwordGenerator = passwordGenerator;
        this->terminal = terminal;
    }

    ArgumentProcessor::~ArgumentProcessor(){};

    void ArgumentProcessor::Process(string args[], int length)
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
