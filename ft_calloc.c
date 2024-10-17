/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:02:12 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/17 20:02:14 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if ((nelem == 0) || (size == 0))
	{
		ptr = ft_calloc(1, 1);
		return (ptr);
	}
	total_size = nelem * size;
	if ((total_size / nelem) != size)
		return (NULL);
	ptr = (char *)malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return ((void *)ptr);
}

/*
int main()
{
	char *ptr = ft_calloc(1,2);
    if (ptr == NULL)
        printf("calloc failed\n");
    else
        printf("calloc success\n");
    free(ptr);
    return (0);
}*/
