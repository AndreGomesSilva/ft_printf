#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_test);

TEST_SETUP(ft_printf_test)
{
}

TEST_TEAR_DOWN(ft_printf_test)
{
}

TEST (ft_atoi_test, should_return_null_pass_mult_sing)
{
	const char	*src = "+-+-+1234@#!4234";

	TEST_ASSERT_EQUAL_INT(printf(src), ft_printf(src));
}

