/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:17:51 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/01 09:17:54 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while (nptr[i] <= 32)
		if (nptr[i] == '\e' || nptr[i++] == '\0')
			return (0);
	while ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if ((nptr[i + 1] == '-') || (nptr[i + 1] == '+'))
			return (0);
		if (nptr[i] == '-')
			minus = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * minus);
}

/*int main()
{
    printf("using atoi: %i\n",atoi("45"));
    printf("using ft_atoi: %i\n",ft_atoi("45"));
    printf("using atoi: %i\n",atoi("   77"));
    printf("using ft_atoi: %i\n",ft_atoi("   77"));
    printf("using atoi: %i\n",atoi("   --99"));
    printf("using ft_atoi: %i\n",ft_atoi("   --99"));
    printf("using atoi: %i\n",atoi("  ++11"));
    printf("using ft_atoi: %i\n",ft_atoi("  ++11"));
    printf("using atoi: %i\n",atoi("   -25a4a"));
    printf("using ft_atoi: %i\n",ft_atoi("   -25a4a"));

    return 0;
}*/
