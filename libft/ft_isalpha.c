/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:13:36 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:13:41 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int test = 'a';

    printf("result of isalpha: %d\n", isalpha(test));
    printf("result of ft_isalpha: %d\n", ft_isalpha(test));
}*/
