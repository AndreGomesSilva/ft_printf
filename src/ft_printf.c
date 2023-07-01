/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:54:18 by angomes-          #+#    #+#             */
/*   Updated: 2023/07/01 19:46:23 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		count += ft_print_string("(null)");
	else
	{
		while (*str)
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
	else if (flag == 'x')
		result = convert_hexad(va_arg(arg, unsigned int), result, 0);
	else if (flag == 'X')
		result = convert_hexad(va_arg(arg, unsigned int), result, 1);
	else if (flag == 'p')
		result += convert_hexad(va_arg(arg, unsigned long), result, 2);
	else if (flag == '%')
		result = ft_print_char('%');
	return (result);
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

// int	main(void)
// {
// 	char	*str;
// 	int		num;
// 	int		result;
//
// 	num = 15;
// 	str = "world";
// 	result = ft_printf(" %p", str);
// 	printf("\n%d\n", result);
// 	result = printf(" %p", str);
// 	printf("\n%d", result);
// 	return (0);
// }
