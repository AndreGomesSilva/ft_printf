#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_u_test);

TEST_SETUP(ft_printf_u_test)
{
}

TEST_TEAR_DOWN(ft_printf_u_test)
{
}

TEST(ft_printf_u_test, should_return_right_int)
{
    unsigned long u = 20000;

	TEST_ASSERT_EQUAL_INT(printf("%u", u), ft_printf("%u", u));
}

TEST(ft_printf_u_test, pass_negative)
{
    int u = -10;

	TEST_ASSERT_EQUAL_INT(printf("%u", u), ft_printf("%u", u));
}

TEST(ft_printf_u_test, pass_max_unsigned)
{
    unsigned long u = 4294967295;

	TEST_ASSERT_EQUAL_INT(printf("%u", u), ft_printf("%u", u));
}
