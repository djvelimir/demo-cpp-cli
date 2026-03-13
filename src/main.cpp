#include <iostream>
#include "validator/argument_validator.h"
#include "generator/password_generator.h"
#include "display/terminal.h"
#include "processor/argument_processor.h"
#include "program/program.h"
#include "shuffler/string_shuffler.h"
#include "generator/random_character_generator.h"

using display::Terminal;
using generator::PasswordGenerator;
using generator::RandomCharacterGenerator;
using processor::ArgumentProcessor;
using program::Program;
using shuffler::StringShuffler;
using validator::ArgumentValidator;

int main(int argc, char *argv[])
{
    vector<string> args = vector<string>(argv, argv + argc);

    ArgumentValidator argumentValidator;
    StringShuffler stringShuffler;
    RandomCharacterGenerator randomCharacterGenerator;
    PasswordGenerator passwordGenerator(stringShuffler, randomCharacterGenerator);
    Terminal terminal;
    ArgumentProcessor argumentProcessor(argumentValidator, passwordGenerator, terminal);

    Program program(argumentProcessor);

    program.Start(args);
}
