/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:25:55 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:25:56 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	size_t	i;
	char	*str;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		str[size1 + i] = s2[i];
		i++;
	}
	str[size1 + size2] = '\0';
	return (str);
}
/*
int main()
{
	char *str1 = "Hello";
    char *str2 = "World";
    char *result;

    result = ft_strjoin(str1, str2);
    printf("Resultant string: %s\n", result);
    free(result);
    return (0);
}
*/
