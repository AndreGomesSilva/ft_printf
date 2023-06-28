/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:54:18 by angomes-          #+#    #+#             */
/*   Updated: 2023/06/27 19:29:00 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_flag(const char *str, va_list arg);
int	check_flag(char flag, va_list arg);

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		num;

	if (!str)
		return (0);
	va_start(arg, str);
	num = find_flag(str, arg);
	va_end(arg);
	return (num);
}

int	find_flag(const char *str, va_list arg)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += check_flag(*str, arg);
			str++;
		}
		else
		{
			count += ft_print_char(*str);
			str++;
		}
	}
	return (count);
}

int	check_flag(char flag, va_list arg)
{
	int	result;

	result = 0;
	if (flag == 'c')
		result = ft_print_char(va_arg(arg, int));
	else if (flag == 's')
		result = ft_print_string(va_arg(arg, char *));
	else if (flag == 'd')
		result = ft_print_number(va_arg(arg, int));
	else if (flag == 'i')
		result = ft_print_number(va_arg(arg, int));
	return (result);
}

// int	sum(int amount, ...)
// {
// 	va_list	arg;
// 	int		i;
// 	int		sum;
//
// 	va_start(arg, amount);
// 	i = 0;
// 	sum = 0;
// 	while (i < amount)
// 	{
// 		sum += va_arg(arg, int);
// 		i++;
// 	}
// 	va_end(arg);
// 	return (sum);
// }

// int	main(void)
// {
// 	char	*str;
// 	int		num;
//   int result;
//
// 	num = 23423525;
// 	str = "world";
// 	result = ft_printf(" NULL %s NULL ", NULL);
//   printf("\n%d\n", result);
// 	result = printf(" NULL %s NULL ", NULL);
//   printf("\n%d", result);
//
// 	return (0);
// }
