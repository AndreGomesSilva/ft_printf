#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_X_test);

TEST_SETUP(ft_printf_X_test)
{
}

TEST_TEAR_DOWN(ft_printf_X_test)
{
}

TEST(ft_printf_X_test, should_return_right_int)
{
    unsigned long X = 20000;

	TEST_ASSERT_EQUAL_INT(printf("%X", X), ft_printf("%X", X));
}

TEST(ft_printf_X_test, pass_negative)
{
    int X = -123;

	TEST_ASSERT_EQUAL_INT(printf("%X", X), ft_printf("%X", X));
}

TEST(ft_printf_X_test, pass_with_space)
{
    int X = -123;

	TEST_ASSERT_EQUAL_INT(printf("  %X  ", X), ft_printf("  %X  ", X));
}

TEST(ft_printf_X_test, pass_max_int)
{
    int X = 2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%X", X), ft_printf("%X", X));
}

TEST(ft_printf_X_test, pass_min_int)
{
    int X = -2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%X", X), ft_printf("%X", X));
}
