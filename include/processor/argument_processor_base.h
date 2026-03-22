#pragma once

#ifndef ARGUMENT_PROCESSOR_BASE_H
#define ARGUMENT_PROCESSOR_BASE_H

#include <string>
#include <vector>

namespace processor
{
    class ArgumentProcessorBase
    {
    public:
        virtual ~ArgumentProcessorBase() = default;

        virtual void Process(const std::vector<std::string> &args) const = 0;
    };
}

#endif // ARGUMENT_PROCESSOR_BASE_H
