#include "seatest.h"
#include "../../../src/lib/algorithms/math.h"

void test_modulo()
{
	assert_int_equal(modulo(0, 0), -1);
}

void math_test_fixture( void )
{
	test_fixture_start();
	run_test(test_modulo);
	test_fixture_end();	
}
