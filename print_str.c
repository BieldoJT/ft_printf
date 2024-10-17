/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:05:08 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/17 20:05:11 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	if (str == NULL)
		return (print_str("(null)"));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
/*
#include <stdio.h>

int main()
{
	char *string = "";

	ft_print_str(string); //Testing print
	printf("\n\n\n%s",string); // using printf.

	printf("\n\n\nvalue of ft_printf: %d",ft_print_str(string));
	printf("\n\n\nvalue of original printf: %d",printf("%s",string));

	return(0);
}*/
