#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_c_test);

TEST_SETUP(ft_printf_c_test)
{
}

TEST_TEAR_DOWN(ft_printf_c_test)
{
}

TEST(ft_printf_c_test, should_return_right_char)
{
	const char	c = 'c';

	TEST_ASSERT_EQUAL_INT_MESSAGE(1, ft_printf("%c", c), "deu merda");
}

TEST(ft_printf_c_test, pass_no_char_int_128)
{
	int	c = 128;

	TEST_ASSERT_EQUAL_INT(printf("%c", c), ft_printf("%c", c));
}

TEST(ft_printf_c_test, pass_negative_int)
{
	int c = -1;

	TEST_ASSERT_EQUAL_INT(printf("%c", c), ft_printf("%c", c));
}

TEST(ft_printf_c_test, pass_space_between_porcent_and_flag_c)
{
	const char	c = 'c';

	TEST_ASSERT_EQUAL_INT(printf("%     c", c), ft_printf("%     c", c));
}

TEST(ft_printf_c_test, should_return_same_value_original_printf)
{
	const char	c = 'x';

	TEST_ASSERT_EQUAL_INT(printf("%c", c), ft_printf("%c", c));
}
