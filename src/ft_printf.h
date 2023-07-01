/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:55:40 by angomes-          #+#    #+#             */
/*   Updated: 2023/07/01 20:36:47 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_number(long int n);
int	ft_print_unsigned_number(long int number);
int	ft_print_number(long int n);
int	ft_print_pointer(int pointer);
int	convert_hexad(unsigned long number, int result, int check);

#endif
