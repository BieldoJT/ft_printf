/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:27:44 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:27:45 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	len;

	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, *start))
		start++;
	while (end >= start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	if (len == 0)
		return (ft_strdup(""));
	return (ft_substr(start, 0, len));
}

/*
int main()
{
	char *s = " ee Hello, World!  e";
    char *set = "eeeoo !";
    char *result;

    result = ft_strtrim(s, set);
    printf("Original string: %s\n", s);
    printf("\nSet of characters to remove: %s\n", set);
    printf("\nResultant string: %s\n", result);
    free(result);
    return (0);
}*/
