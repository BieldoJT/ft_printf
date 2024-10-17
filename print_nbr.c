#include "ft_printf.h"

int	print_nbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = print_str(num);
	free(num);
	return (len);
}

/*

#include <limits.h>

int main()
{
	int num  = INT_MIN;

	print_nbr(num);
	printf("\n");
	printf("\nprinting legth str: %d\n",print_nbr(num)); // length str

	return (0);
}*/
