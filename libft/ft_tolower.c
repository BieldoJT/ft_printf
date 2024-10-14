/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:28:00 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:28:01 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}

/*
int main(void)
{
    char c = 'A';

    printf("using toupper: %d\n", tolower(c));
    printf("using ft_toupper: %d\n", ft_tolower(c));
}*/
