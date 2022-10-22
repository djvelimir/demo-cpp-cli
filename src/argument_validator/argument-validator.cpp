#include "argument-validator.h"

namespace argument_validator
{
    ArgumentValidator::~ArgumentValidator(){};

    bool ArgumentValidator::Validate(std::string args[], int length)
    {
        return length != 0 && length == 2 && args[0] == "generate" && args[1] == "password";
    }
}
