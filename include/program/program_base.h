#pragma once

#ifndef PROGRAM_BASE_H
#define PROGRAM_BASE_H

#include <string>
#include <vector>

namespace program
{
    class ProgramBase
    {
    public:
        virtual ~ProgramBase() = default;

        virtual void Start(const std::vector<std::string> &args) const = 0;
    };
}

#endif // PROGRAM_BASE_H
