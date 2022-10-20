#include <iostream>
#include "include/argument-validator-base.h"
#include "include/argument-validator.h"
#include "include/password-generator-base.h"
#include "include/password-generator.h"
#include "include/terminal-base.h"
#include "include/terminal.h"
#include "include/argument-processor-base.h"
#include "include/argument-processor.h"
#include "include/program-base.h"
#include "include/program.h"

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
