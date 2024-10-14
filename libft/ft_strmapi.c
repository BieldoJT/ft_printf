/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:27:07 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:27:08 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	index = ft_strlen(s);
	result = (char *)ft_calloc(index + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (index--)
		result[index] = f(index, s[index]);
	return (result);
}
