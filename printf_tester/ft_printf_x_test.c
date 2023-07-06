#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_x_test);

TEST_SETUP(ft_printf_x_test)
{
}

TEST_TEAR_DOWN(ft_printf_x_test)
{
}

TEST(ft_printf_x_test, should_return_right_int)
{
    unsigned long x = 20000;

	TEST_ASSERT_EQUAL_INT(printf("%x", x), ft_printf("%x", x));
}

TEST(ft_printf_x_test, pass_negative)
{
    int x = -123;

	TEST_ASSERT_EQUAL_INT(printf("%x", x), ft_printf("%x", x));
}

TEST(ft_printf_x_test, pass_with_space)
{
    int x = -123;

	TEST_ASSERT_EQUAL_INT(printf("  %x  ", x), ft_printf("  %x  ", x));
}

TEST(ft_printf_x_test, pass_max_int)
{
    int x = 2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%x", x), ft_printf("%x", x));
}

TEST(ft_printf_x_test, pass_min_int)
{
    int x = -2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%x", x), ft_printf("%x", x));
}
