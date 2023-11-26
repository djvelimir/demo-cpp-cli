#include <iostream>
#include "validator/argument-validator-base.h"
#include "validator/argument-validator.h"
#include "generator/password-generator-base.h"
#include "generator/password-generator.h"
#include "display/terminal-base.h"
#include "display/terminal.h"
#include "processor/argument-processor-base.h"
#include "processor/argument-processor.h"
#include "program/program-base.h"
#include "program/program.h"
#include "shuffler/string-shuffler-base.h"
#include "shuffler/string-shuffler.h"
#include "generator/random-character-generator-base.h"
#include "generator/random-character-generator.h"

using display::Terminal;
using display::TerminalBase;
using generator::PasswordGenerator;
using generator::PasswordGeneratorBase;
using generator::RandomCharacterGenerator;
using generator::RandomCharacterGeneratorBase;
using processor::ArgumentProcessor;
using processor::ArgumentProcessorBase;
using program::Program;
using program::ProgramBase;
using shuffler::StringShuffler;
using shuffler::StringShufflerBase;
using std::vector;
using std::string;
using std::make_unique;
using std::unique_ptr;
using validator::ArgumentValidator;
using validator::ArgumentValidatorBase;

int main(int argc, char *argv[])
{
    vector<string> args = vector<string>(argv, argv + argc);

    unique_ptr<ArgumentValidatorBase> argumentValidator = make_unique<ArgumentValidator>();
    unique_ptr<StringShufflerBase> stringShuffler = make_unique<StringShuffler>();
    unique_ptr<RandomCharacterGeneratorBase> randomCharacterGenerator = make_unique<RandomCharacterGenerator>();
    unique_ptr<PasswordGeneratorBase> passwordGenerator = make_unique<PasswordGenerator>(stringShuffler, randomCharacterGenerator);
    unique_ptr<TerminalBase> terminal = make_unique<Terminal>();
    unique_ptr<ArgumentProcessorBase> argumentProcessor = make_unique<ArgumentProcessor>(argumentValidator, passwordGenerator, terminal);

    unique_ptr<ProgramBase> program = make_unique<Program>(argumentProcessor);

    program->Start(args);
}
