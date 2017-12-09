#include <iostream>
using namespace std;

#include "greeter.h"

int main() {
    const greeter a_greeter;

    cout << a_greeter.greet() << endl;
    cout << "version " << a_greeter.version() << endl;

    return 0;
}
