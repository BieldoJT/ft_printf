/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:02:57 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/17 20:02:59 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_cases(char c, va_list args)
{
	int	value_return;

	value_return = 0;
	if (c == 'c')
		value_return = print_char(va_arg(args, int));
	else if (c == 's')
		value_return = print_str(va_arg(args, char *));
	else if ((c == 'i') || (c == 'd'))
		value_return = print_nbr(va_arg(args, int));
	else if (c == 'u')
		value_return = print_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		value_return = print_ptr(va_arg(args, void *));
	else if (c == 'X' || c == 'x')
		value_return = print_hexa(va_arg(args, unsigned int), c);
	else
		value_return = print_char('%');
	return (value_return);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len_str;
	int		count;

	len_str = 0;
	count = 0;
	va_start(args, str);
	while (str[len_str])
	{
		if (str[len_str] == '%' && ft_strchr("cspudiXx%", str[len_str + 1]))
		{
			len_str++;
			count += print_cases(str[len_str], args);
		}
		else
			count += print_char(str[len_str]);
		len_str++;
	}
	return (count);
}
