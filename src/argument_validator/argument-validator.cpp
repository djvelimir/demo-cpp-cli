#include "argument-validator.h"

using std::string;

namespace argument_validator
{
    ArgumentValidator::~ArgumentValidator(){};

    bool ArgumentValidator::Validate(string args[], int length)
    {
        return length != 0 && length == 2 && args[0] == "generate" && args[1] == "password";
    }
}
