/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:19:13 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/01 09:19:16 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	i = 0;
	tmp_s = (unsigned char *) s;
	while (i < n)
	{
		tmp_s[i] = 0;
		i++;
	}
}

/*
int main(void)
{
    char s[20] = "isso e um teste";
    char t[20] = "isso e um teste";

    bzero(s,2);
    ft_bzero(t,2);

    printf("Buffer contents in s[2]: %c\n",s[2]);
    printf("Buffer contents t[2]: %c\n",t[2]);

}*/
