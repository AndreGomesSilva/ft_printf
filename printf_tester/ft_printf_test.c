#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_test);

TEST_SETUP(ft_printf_test)
{
}

TEST_TEAR_DOWN(ft_printf_test)
{
}
TEST (ft_printf_test, should_return_right_string)
{
	const char	*src = "hello";

	TEST_ASSERT_EQUAL_INT(printf("%s", src), ft_printf("%s", src));
}

