#include <iostream>
#include "argument-validator/argument-validator-base.h"
#include "argument-validator/argument-validator.h"
#include "password-generator/password-generator-base.h"
#include "password-generator/password-generator.h"
#include "terminal/terminal-base.h"
#include "terminal/terminal.h"
#include "argument-processor/argument-processor-base.h"
#include "argument-processor/argument-processor.h"
#include "program/program-base.h"
#include "program/program.h"

int main(int argc, char* argv[]) {    

    int length = argc-1;
    std::string args[length];
    for(int i=0; i<length; i++) {
        args[i] = argv[i+1];
    }

    ArgumentValidatorBase* argumentValidator = new ArgumentValidator();
    PasswordGeneratorBase* passwordGenerator = new PasswordGenerator();
    TerminalBase* terminal = new Terminal();
    ArgumentProcessorBase* argumentProcessor = new ArgumentProcessor(argumentValidator, passwordGenerator, new Terminal());

    ProgramBase* program = new Program(argumentProcessor);
    program->Start(args, length);

    delete argumentValidator;
    delete passwordGenerator;
    delete terminal;
    delete argumentProcessor;

    delete program;
}
