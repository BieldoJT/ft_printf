/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:27:36 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:27:37 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
    printf("using strrchr: %s\n", strrchr("I am optimus prime", 'm'));
    printf("using ft_strrchr: %s\n", ft_strrchr("I am optimus prime", 'm'));

}*/
