/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:18:03 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:18:10 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = int_len(n);
	s = (char *)ft_calloc(1, (len + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (--len >= 0)
	{
		if (s[len] == '-')
			break ;
		s[len] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}

/*
int main(void)
{
	int n = -123456789;
    char *str = ft_itoa(n);
    printf("Integer: %d\n", n);
    printf("String: %s\n", str);
    free(str);
    return (0);
}*/
