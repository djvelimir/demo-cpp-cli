#pragma once

#include <string>
#include <vector>

namespace processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase();

        virtual void Process(const std::vector<std::string> &args) const = 0;
    };
}
