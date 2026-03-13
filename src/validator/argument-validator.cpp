#include "validator/argument-validator.h"

namespace validator
{
    ArgumentValidator::~ArgumentValidator() {};

    bool ArgumentValidator::Validate(const vector<string> &args) const
    {
        return args.size() == 3 && args[1] == "generate" && args[2] == "password";
    }
}
