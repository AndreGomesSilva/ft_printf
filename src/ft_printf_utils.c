/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:09:06 by angomes-          #+#    #+#             */
/*   Updated: 2023/07/03 13:21:42 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexadecimal_convert(unsigned long number, int result, int flag_type)
{
	int	remainder;

	if (flag_type == 2)
	{
		if (!number)
			return (ft_print_string("(nil)"));
		else
			result += ft_print_string("0x");
		flag_type = 0;
	}
	if (number > 15)
		result += hexadecimal_convert(number / 16, 0, flag_type);
	remainder = number % 16;
	if (remainder < 10)
		result += ft_print_char('0' + remainder);
	else if (flag_type == 0)
		result += ft_print_char('a' + remainder - 10);
	else if (flag_type == 1)
		result += ft_print_char('A' + remainder - 10);
	return (result);
}

int	ft_print_unsigned_number(long int number)
{
	long int	lim;
	long int	result;

	lim = 0;
	result = 0;
	if (number < 0)
	{
		lim = 4294967296 + (number);
		result = ft_print_number(lim);
	}
	else
		result = ft_print_number(number);
	return (result);
}

static long int	count_len_int(long int number)
{
	long int	len;

	len = 0;
	if (number < 0)
	{
		number = number * (-1);
		len++;
	}
	while (number > 9)
	{
		len++;
		number /= 10;
	}
	len++;
	return (len);
}

int	ft_print_number(long int number)
{
	char		*str;
	long int	len;
	long int	i;

	len = count_len_int(number);
	i = 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		ft_print_string(NULL);
	if (number < 0)
	{
		*str = '-';
		number = number * (-1);
	}
	while (number > 9)
	{
		*(str + len - i) = (number % 10 + '0');
		number /= 10;
		i++;
	}
	*(str + len - i) = (number % 10 + '0');
	*(str + len) = '\0';
	ft_print_string(str);
	free(str);
	return (len);
}
