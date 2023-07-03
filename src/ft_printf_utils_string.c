/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:56:02 by angomes-          #+#    #+#             */
/*   Updated: 2023/07/03 15:00:51 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		count += print_string("(null)");
	else
	{
		while (*str)
		{
			count += print_char(*str);
			str++;
		}
	}
	return (count);
}
