#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <stdlib.h>

TEST_GROUP(ft_printf_s_test);

TEST_SETUP(ft_printf_s_test)
{
}

TEST_TEAR_DOWN(ft_printf_s_test)
{
}

TEST(ft_printf_s_test, should_return_right_string)
{
	const char	*s = "hello";

	TEST_ASSERT_EQUAL_INT(printf("%s", s), ft_printf("%s", s));
}

TEST(ft_printf_s_test, should_return_null)
{
    const char *s = "";

    TEST_ASSERT_EQUAL_INT(printf("%s", s), ft_printf("%s", s));
}

TEST(ft_printf_s_test, pass_big_string)
{
    const char *s = "hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world hello_ world ";

    TEST_ASSERT_EQUAL_INT(printf("%s", s), ft_printf("%s", s));
}

TEST(ft_printf_s_test, pass_little_string)
{
    const char *s = "h";

    TEST_ASSERT_EQUAL_INT(printf("%s", s), ft_printf("%s", s));
}

TEST(ft_printf_s_test, pass_NULL)
{
    const char *s = NULL;

    TEST_ASSERT_EQUAL_INT(printf("%s", s), ft_printf("%s", s));
}

TEST(ft_printf_s_test, pass_NULL_directly)
{
    TEST_ASSERT_EQUAL_INT(printf(NULL), ft_printf(NULL));
}
