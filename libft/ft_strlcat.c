/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:26:28 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:26:30 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
int main(void)
{
    char dst[20] =  "This";
    const char *src = " is a test";
	char dst2[20] =  "This";
    const char *src2 = " is a test";
	strlcat(dst,src,7);
	ft_strlcat(dst2,src2,7);
	printf("%s\n", dst);
	printf("%s\n", dst2);
    //printf("using strlcat: %li\n", strlcat(dst,src,7));
    //printf("using ft_strlcat: %i\n", ft_strlcat(dst,src,7));
}
*/
