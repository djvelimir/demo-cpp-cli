#include "argument-validator.h"

ArgumentValidator::~ArgumentValidator() {};

bool ArgumentValidator::Validate(std::string args[], int length)
{
    return length != 0 && length == 2 && args[0] == "generate" && args[1] == "password";
}