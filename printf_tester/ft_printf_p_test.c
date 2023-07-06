#include "unity.h"
#include "unity_fixture.h"
#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>

TEST_GROUP(ft_printf_p_test);

TEST_SETUP(ft_printf_p_test)
{
}

TEST_TEAR_DOWN(ft_printf_p_test)
{
}

TEST(ft_printf_p_test, pass_NULL_pointer)
{
    void *p = NULL;
    
    TEST_ASSERT_EQUAL_INT(printf(" %p ", p), ft_printf(" %p ", p));
}

TEST(ft_printf_p_test, pass_two_pointer_0)
{
    TEST_ASSERT_EQUAL_INT(printf(" %p %p ", 0, 0), ft_printf(" %p %p ", 0, 0));
}

TEST(ft_printf_p_test, return_the_right_adress)
{
    char *s = "hello";
    void *p = &s ;
    TEST_ASSERT_EQUAL_INT(printf(" %p %p ", p, p), ft_printf(" %p %p ", p, p));
}

TEST(ft_printf_p_test, pass_long_min_and_long_max)
{
    TEST_ASSERT_EQUAL_INT(printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX), ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX));
}

TEST(ft_printf_p_test, pass_int_min_and_max)
{
    TEST_ASSERT_EQUAL_INT(printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX), ft_printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX));
}

TEST(ft_printf_p_test, pass_unsigned_min_and_max)
{
    TEST_ASSERT_EQUAL_INT(printf(" %p %p ", (void *) -10 , (void *)ULONG_MAX), ft_printf(" %p %p ", (void *) -10, (void *)ULONG_MAX));
}
