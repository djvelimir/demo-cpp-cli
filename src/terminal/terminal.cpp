#include "terminal.h"

namespace terminal {
    Terminal::~Terminal() {};

    void Terminal::Show(std::string message)
    {
        std::cout << message << std::endl;
    }
}
