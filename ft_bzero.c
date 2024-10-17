/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:02:03 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/17 20:02:07 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
    char s[20] = "this is a test";
    char t[20] = "This is a test";

    bzero(s,2);
    ft_bzero(t,2);

    printf("Buffer contents in s[2]: %c\n",s[2]);
    printf("Buffer contents t[2]: %c\n",t[2]);

}*/
