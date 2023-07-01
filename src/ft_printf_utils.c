/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:09:06 by angomes-          #+#    #+#             */
/*   Updated: 2023/07/01 20:36:46 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_hexad(unsigned long number, int result, int check)
{
	int	remainder;

	if (check == 2)
	{
		if (!number)
			return (ft_print_string("(nil)"));
		else
			result += ft_print_string("0x");
		check = 0;
	}
	if (number > 15)
		result += convert_hexad(number / 16, 0, check);
	remainder = number % 16;
	if (remainder < 10)
		result += ft_print_char('0' + remainder);
	else if (check == 0)
		result += ft_print_char('a' + remainder - 10);
	else if (check == 1)
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

static long int	count_len_int(long int n)
{
	long int	len;

	len = 0;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	len++;
	return (len);
}

int	ft_print_number(long int number)
{
	char		*s;
	long int	len;
	long int	i;

	len = count_len_int(number);
	i = 1;
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		ft_print_string(NULL);
	if (number < 0)
	{
		*s = '-';
		number = number * (-1);
	}
	while (number > 9)
	{
		*(s + len - i) = (number % 10 + '0');
		number /= 10;
		i++;
	}
	*(s + len - i) = (number % 10 + '0');
	*(s + len) = '\0';
	ft_print_string(s);
	free(s);
	return (len);
}
