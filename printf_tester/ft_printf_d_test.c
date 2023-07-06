#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_d_test);

TEST_SETUP(ft_printf_d_test)
{
}

TEST_TEAR_DOWN(ft_printf_d_test)
{
}

TEST(ft_printf_d_test, should_return_right_int)
{
    unsigned long d = 20000;

	TEST_ASSERT_EQUAL_INT(printf("%d", d), ft_printf("%d", d));
}

TEST(ft_printf_d_test, pass_negative)
{
    int d = -123;

	TEST_ASSERT_EQUAL_INT(printf("%d", d), ft_printf("%d", d));
}

TEST(ft_printf_d_test, pass_with_space)
{
    int d = -123;

	TEST_ASSERT_EQUAL_INT(printf("  %d  ", d), ft_printf("  %d  ", d));
}

TEST(ft_printf_d_test, pass_max_int)
{
    int d = 2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%d", d), ft_printf("%d", d));
}

TEST(ft_printf_d_test, pass_min_int)
{
    int d = -2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%d", d), ft_printf("%d", d));
}
