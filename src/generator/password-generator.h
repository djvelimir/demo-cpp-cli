#pragma once

#include "password-generator-base.h"
#include "../shuffler/string-shuffler-base.h"
#include "random-character-generator-base.h"

using generator::RandomCharacterGeneratorBase;
using shuffler::StringShufflerBase;
using std::shared_ptr;
using std::string;

namespace generator
{
    class PasswordGenerator : public PasswordGeneratorBase
    {
    private:
        int passwordLength;

        shared_ptr<StringShufflerBase> stringShuffler;

        shared_ptr<RandomCharacterGeneratorBase> randomCharacterGenerator;

    public:
        PasswordGenerator(shared_ptr<StringShufflerBase> &stringShuffler, shared_ptr<RandomCharacterGeneratorBase> &randomCharacterGenerator);

        virtual ~PasswordGenerator();

        string Generate();
    };
}
