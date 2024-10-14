/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:22:27 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:22:28 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_src;

	tmp_src = (unsigned char *) s;
	while (n--)
		*tmp_src++ = c;
	return (s);
}

/*
int main(void)
{
    char str1[15] = "hello world";
    char str2[15] = "hello world";

    printf("\n String before: %s\n", str1);
    memset(str1, 'B', 3);
    ft_memset(str2, 'B', 3);


    printf("\nUsing memset: %s\n", str1);
    printf("\nUsing ft_memset: %s\n", str2);
}*/
