/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:25:31 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:25:34 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)ft_calloc((len + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, len);
	return (ptr);
}

/*
int main()
{
	char *s = "Hello World";
    char *copy = strdup(s);
    printf("string : %s\n", s);
    printf("copied string : %s\n", copy);
    free(copy);
    return (0);
}*/
