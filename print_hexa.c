/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:04:46 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/17 20:04:48 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_num_hex(unsigned int c)
{
	int	count;

	count = 0;
	while (c > 0)
	{
		count++;
		c /= 16;
	}
	return (count);
}

static char	*itoh(unsigned int c, int caps)
{
	char	*hex_str;
	int		num;
	int		len_str;

	len_str = count_num_hex(c);
	hex_str = (char *)ft_calloc(sizeof(char), (len_str + 1));
	if (hex_str == NULL)
		return (NULL);
	while (c > 0)
	{
		num = c % 16;
		if (num > 9)
		{
			if (caps > 1)
				hex_str[--len_str] = num + 87;
			else
				hex_str[--len_str] = num + 55;
		}
		else
			hex_str[--len_str] = num + 48;
		c /= 16;
	}
	return (hex_str);
}

int	print_hexa(unsigned int c, char caps)
{
	char	*num_hexa_str;
	int		len;

	if (c == 0)
	{
		ft_putnbr_fd(0, 1);
		return (1);
	}
	else
	{
		num_hexa_str = itoh(c, ft_isalpha(caps));
		len = print_str(num_hexa_str);
		free(num_hexa_str);
		return (len);
	}
}

/*

#include <stdio.h>
#include <limits.h>

int main()
{

    printf("\n\nTesting function count:\n\n");
    int test_num1 = -35;
    printf("count_num_hex(%d) = %d\n", test_num1, count_num_hex(test_num1));



    printf("\n\nTesting function itoh:\n\n");
    char *hex_str1 = itoh(test_num1, 2);
    printf("itoh(%d, 1) = %s\n", test_num1, hex_str1);
    free(hex_str1);


    printf("\n\nTesting funciton print_hexa:\n\n");
    print_hexa(test_num1, 'x');
	printf("\n");



	printf("\n\n\n\n%x",-35);
    return 0;
}*/
