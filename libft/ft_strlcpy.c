/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:26:42 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:26:44 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
    const char *src = "Vasco da Gama";
    char dst[20];

    printf("using strlcpy: %li\n", strlcpy(dst,src,2));
    printf("using ft_strlcpy: %i\n", ft_strlcpy(dst,src,2));
    return (0);
}*/
