#include "greeter.h"

string greeter::greet() const {
    return "Hello, World!";
}

unsigned int greeter::version() const {
    return version_;
}
