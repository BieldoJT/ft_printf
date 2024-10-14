/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:21:37 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:21:39 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}

/*
int main()
{
	char *str = "Hello World";
    printf("using memchr: %s\n", (char *)memchr(str, 'o', 11));
    printf("using ft_memchr: %s\n", (char *)ft_memchr(str, 'o', 11));
    return (0);
}*/
