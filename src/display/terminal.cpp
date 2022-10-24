#include "terminal.h"

using std::cout;
using std::endl;
using std::string;

namespace display
{
    Terminal::~Terminal(){};

    void Terminal::Show(string message)
    {
        cout << message << endl;
    }
}
