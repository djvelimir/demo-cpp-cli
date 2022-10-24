#include "argument-validator.h"

using std::string;

namespace validator
{
    ArgumentValidator::~ArgumentValidator(){};

    bool ArgumentValidator::Validate(char *args[], int length)
    {
        string command = args[1];
        string argument = args[2];
        return length != 0 && length == 3 && command == "generate" && argument == "password";
    }
}
