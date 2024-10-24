#include "argument-processor.h"

using std::shared_ptr;
using std::string;
using std::vector;

namespace processor
{
    ArgumentProcessor::ArgumentProcessor(shared_ptr<ArgumentValidatorBase> &argumentValidator, shared_ptr<PasswordGeneratorBase> &passwordGenerator, shared_ptr<TerminalBase> &terminal)
    {
        this->argumentValidator = argumentValidator;
        this->passwordGenerator = passwordGenerator;
        this->terminal = terminal;
    }

    ArgumentProcessor::~ArgumentProcessor() {};

    void ArgumentProcessor::Process(const vector<string> &args)
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
