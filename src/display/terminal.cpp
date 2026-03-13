#include "display/terminal.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

namespace display
{
    Terminal::~Terminal() {}

    void Terminal::Show(const string &message) const
    {
        cout << message << endl;
    }
}
