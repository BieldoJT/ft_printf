/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:28:07 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:28:11 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}

/*
int main(void)
{
    char c = '0';

    printf("using toupper: %d\n", toupper(c));
    printf("using ft_toupper: %d\n", ft_toupper(c));
}*/
