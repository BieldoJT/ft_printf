/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:27:16 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:27:18 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (i);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int	main()
{
	char *str1 = "ABC";
	char *str2 = "tBC";

	printf("using strncmp: %i\n", strncmp("str1", str2,0));
	printf("using ft_strncmp: %i\n", ft_strncmp(str1, str2,0));
}*/
