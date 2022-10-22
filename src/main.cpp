#include <iostream>
#include "argument-validator-base.h"
#include "argument-validator.h"
#include "password-generator-base.h"
#include "password-generator.h"
#include "terminal-base.h"
#include "terminal.h"
#include "argument-processor-base.h"
#include "argument-processor.h"
#include "program-base.h"
#include "program.h"

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
