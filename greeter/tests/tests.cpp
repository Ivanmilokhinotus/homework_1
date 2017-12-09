#define BOOST_TEST_MODULE greeters tests

#include "boost/test/unit_test.hpp"
using namespace boost;

#include "greeter.h"
#include "version.h"

BOOST_AUTO_TEST_SUITE(greeter_methods_tests)
    const greeter a_greeter;

    BOOST_AUTO_TEST_CASE(greet) {
        BOOST_CHECK("Hello, World!"s == a_greeter.greet());
    }

    BOOST_AUTO_TEST_CASE(version) {
        BOOST_CHECK(VERSION == a_greeter.version());
    }

BOOST_AUTO_TEST_SUITE_END()
