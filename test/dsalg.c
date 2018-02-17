#include "seatest.h"

void math_test_fixture(void);

void test_suite(void)
{
    math_test_fixture();
}

void test_suite_setup(void)
{
}

void test_suite_teardown(void)
{
}

int main(int argc, char** argv)
{
    return seatest_testrunner(argc, argv, test_suite, test_suite_setup,
                              test_suite_teardown);
}
