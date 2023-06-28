/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:09:06 by angomes-          #+#    #+#             */
/*   Updated: 2023/06/27 19:34:40 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long int	count_len_int(long int n);

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

int	ft_print_number(int n)
{
	char		*s;
	long int	len;
	long int	i;
	long int	number;

	number = n;
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
		*(s + len - i) = (number % 10 + 48);
		number /= 10;
		i++;
	}
	*(s + len - i) = (number % 10 + 48);
	*(s + len) = '\0';
	ft_print_string(s);
	free(s);
	return (len);
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
