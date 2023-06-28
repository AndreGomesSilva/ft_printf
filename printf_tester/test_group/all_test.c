#include "unity_fixture.h"

TEST_GROUP_RUNNER(ft_printf_test)
{
	RUN_TEST_CASE(ft_printf_test, should_return_right_string);
}

static void	run_all_tests(void)
{
	RUN_TEST_GROUP(ft_printf_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
