#include "unity_fixture.h"

TEST_GROUP_RUNNER(ft_printf_c_test)
{
	RUN_TEST_CASE(ft_printf_c_test, should_return_right_char);
  RUN_TEST_CASE(ft_printf_c_test, pass_no_char_int_128);
  RUN_TEST_CASE(ft_printf_c_test, pass_negative_int);
  RUN_TEST_CASE(ft_printf_c_test, pass_space_between_porcent_and_flag_c);
  RUN_TEST_CASE(ft_printf_c_test, should_return_same_value_original_printf);
}

TEST_GROUP_RUNNER(ft_printf_s_test)
{
  RUN_TEST_CASE(ft_printf_s_test, should_return_right_string);
  RUN_TEST_CASE(ft_printf_s_test, should_return_null);
  RUN_TEST_CASE(ft_printf_s_test, pass_big_string);
  RUN_TEST_CASE(ft_printf_s_test, pass_NULL);
  RUN_TEST_CASE(ft_printf_s_test, pass_NULL_directly);
}

TEST_GROUP_RUNNER(ft_printf_u_test)
{
    RUN_TEST_CASE(ft_printf_u_test, should_return_right_int);
    RUN_TEST_CASE(ft_printf_u_test, pass_negative);
    RUN_TEST_CASE(ft_printf_u_test, pass_max_unsigned);
}

TEST_GROUP_RUNNER(ft_printf_i_test)
{
    RUN_TEST_CASE(ft_printf_i_test, should_return_right_int);
    RUN_TEST_CASE(ft_printf_i_test, pass_max_int);
    RUN_TEST_CASE(ft_printf_i_test, pass_negative);
    RUN_TEST_CASE(ft_printf_i_test, pass_with_space);
    RUN_TEST_CASE(ft_printf_i_test, pass_min_int);
}

TEST_GROUP_RUNNER(ft_printf_d_test)
{
    RUN_TEST_CASE(ft_printf_d_test, should_return_right_int);
    RUN_TEST_CASE(ft_printf_d_test, pass_max_int);
    RUN_TEST_CASE(ft_printf_d_test, pass_negative);
    RUN_TEST_CASE(ft_printf_d_test, pass_with_space);
    RUN_TEST_CASE(ft_printf_d_test, pass_min_int);
}

TEST_GROUP_RUNNER(ft_printf_x_test)
{
    RUN_TEST_CASE(ft_printf_x_test, should_return_right_int);
    RUN_TEST_CASE(ft_printf_x_test, pass_max_int);
    RUN_TEST_CASE(ft_printf_x_test, pass_negative);
    RUN_TEST_CASE(ft_printf_x_test, pass_with_space);
    RUN_TEST_CASE(ft_printf_x_test, pass_min_int);
}

TEST_GROUP_RUNNER(ft_printf_X_test)
{
    RUN_TEST_CASE(ft_printf_X_test, should_return_right_int);
    RUN_TEST_CASE(ft_printf_X_test, pass_max_int);
    RUN_TEST_CASE(ft_printf_X_test, pass_negative);
    RUN_TEST_CASE(ft_printf_X_test, pass_with_space);
    RUN_TEST_CASE(ft_printf_X_test, pass_min_int);
}

TEST_GROUP_RUNNER(ft_printf_p_test)
{
    RUN_TEST_CASE(ft_printf_p_test, pass_NULL_pointer);
    RUN_TEST_CASE(ft_printf_p_test, pass_two_pointer_0);
    RUN_TEST_CASE(ft_printf_p_test, return_the_right_adress);
    RUN_TEST_CASE(ft_printf_p_test, pass_long_min_and_long_max);
    RUN_TEST_CASE(ft_printf_p_test, pass_int_min_and_max);
    RUN_TEST_CASE(ft_printf_p_test, pass_unsigned_min_and_max);
}
static void	run_all_tests(void) 
{
  RUN_TEST_GROUP(ft_printf_c_test);
  RUN_TEST_GROUP(ft_printf_s_test);
  RUN_TEST_GROUP(ft_printf_u_test);
  RUN_TEST_GROUP(ft_printf_i_test);
  RUN_TEST_GROUP(ft_printf_d_test);
  RUN_TEST_GROUP(ft_printf_x_test);
  RUN_TEST_GROUP(ft_printf_X_test);
  RUN_TEST_GROUP(ft_printf_p_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
