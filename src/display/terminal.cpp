#include "display/terminal.h"

using std::cout;
using std::endl;

namespace display
{
    Terminal::~Terminal() {};

    void Terminal::Show(const string &message) const
    {
        cout << message << endl;
    }
}
