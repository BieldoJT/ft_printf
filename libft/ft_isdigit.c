/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:17:13 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:17:26 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char test = 'a';
    printf("result isdigit: %d\n", isdigit(test));
    printf("result isdigit: %d\n", ft_isdigit(test));
}*/
