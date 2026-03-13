#pragma once

#include <string>
#include <vector>

namespace program
{
    class ProgramBase
    {
    public:
        virtual ~ProgramBase();

        virtual void Start(const std::vector<std::string> &args) const = 0;
    };
}
