#include "terminal.h"

using std::string;

namespace terminal
{
    Terminal::~Terminal(){};

    void Terminal::Show(string message)
    {
        std::cout << message << std::endl;
    }
}
