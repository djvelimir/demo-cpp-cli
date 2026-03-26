#include "validator/argument_validator.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

namespace validator
{
    bool ArgumentValidator::Validate(const vector<string> &args) const
    {
        return args.size() == 2 && args[0] == "generate" && args[1] == "password";
    }
}
