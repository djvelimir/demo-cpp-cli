#include "argument-processor.h"

namespace argument_processor
{
    ArgumentProcessor::ArgumentProcessor(ArgumentValidatorBase *argumentValidator, PasswordGeneratorBase *passwordGenerator, TerminalBase *terminal)
    {
        this->argumentValidator = argumentValidator;
        this->passwordGenerator = passwordGenerator;
        this->terminal = terminal;
    }

    ArgumentProcessor::~ArgumentProcessor(){};

    void ArgumentProcessor::Process(std::string args[], int length)
    {
        if (!argumentValidator->Validate(args, length))
        {
            std::string usage = "Usage:\n./demo-cpp-cli generate password";
            terminal->Show(usage);
            return;
        }

        std::string password = passwordGenerator->Generate();
        terminal->Show(password);
    }
}
