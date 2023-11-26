#include "argument-validator.h"

using std::vector;
using std::string;

namespace validator
{
    ArgumentValidator::~ArgumentValidator(){};

    bool ArgumentValidator::Validate(const vector<string>& args)
    {
        return args.size() == 3 && args[1] == "generate" && args[2] == "password";
    }
}
