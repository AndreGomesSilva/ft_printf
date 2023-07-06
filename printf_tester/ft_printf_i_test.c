#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_i_test);

TEST_SETUP(ft_printf_i_test)
{
}

TEST_TEAR_DOWN(ft_printf_i_test)
{
}

TEST(ft_printf_i_test, should_return_right_int)
{
    unsigned long i = 20000;

	TEST_ASSERT_EQUAL_INT(printf("%i", i), ft_printf("%i", i));
}

TEST(ft_printf_i_test, pass_negative)
{
    int i = -123;

	TEST_ASSERT_EQUAL_INT(printf("%i", i), ft_printf("%i", i));
}

TEST(ft_printf_i_test, pass_with_space)
{
    int i = -123;

	TEST_ASSERT_EQUAL_INT(printf("  %i  ", i), ft_printf("  %i  ", i));
}

TEST(ft_printf_i_test, pass_max_int)
{
    int i = 2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%i", i), ft_printf("%i", i));
}

TEST(ft_printf_i_test, pass_min_int)
{
    int i = -2147483647;

	TEST_ASSERT_EQUAL_INT(printf("%i", i), ft_printf("%i", i));
}
