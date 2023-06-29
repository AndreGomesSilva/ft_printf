/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:54:18 by angomes-          #+#    #+#             */
/*   Updated: 2023/06/29 10:54:42 by angomes-         ###   ########.fr       */
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
	else if (flag == 'u')
		result = ft_print_unsigned_number(va_arg(arg, int));
	return (result);
}

// int	main(void)
// {
// 	char	*str;
// 	int		num;
//   int result;
//
// 	num = 23423525;
// 	str = "world";
// 	result = ft_printf("%u", -1);
//   printf("\n%d\n", result);
// 	result = printf("%u", -1);
//   printf("\n%d", result);
//
// 	return (0);
// }
