#include "libftprintf.h"

int	print_nbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = print_str(num);
	return (len);
}

/*

#include <limits.h>

int main()
{
	int num  = INT_MIN;

	print_nbr(num);
	printf("\n");
	printf("\nprintando o tamnho da str: %d\n",print_nbr(num)); // printando o tamanho da str

	return (0);
}*/
