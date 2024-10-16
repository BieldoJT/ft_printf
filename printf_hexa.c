
#include "libftprintf.h"

static int count_num_hex(unsigned int c)
{
	int	count;

	count = 0;
	while (c > 0)
	{
		count++;
		c /= 16;
	}
	return (count);
}

static char	*itoh(unsigned int c, int caps)
{
	char	*hex_str;
	int	num;
	int	len_str;

	len_str = count_num_hex(c);
	hex_str = (char *)ft_calloc(sizeof(char),(len_str + 1));
	if (hex_str == NULL)
		return (NULL);
	while (c > 0)
	{
		num = c % 16;
		if (num > 9)
		{
			if (caps > 1)
				hex_str[--len_str] = num + 87;
			else
				hex_str[--len_str] = num + 55;
		}
		else
			hex_str[--len_str] = num + 48;
		c /= 16;
	}
	return (hex_str);
}

int	print_hexa(unsigned int c, char caps)
{
	char *num_hexa_str;

	if (c == 0)
	{
		ft_putnbr_fd(0,1);
		return (1);
	}
	else
	{
		num_hexa_str = itoh(c, ft_isalpha(caps));
		ft_putstr_fd(num_hexa_str,1);
		return (ft_strlen(num_hexa_str));
	}
}

/*

#include <stdio.h>
#include <limits.h>

int main()
{

    printf("\n\nTestando a função count_num_hex:\n\n");
    int test_num1 = -35;
    printf("count_num_hex(%d) = %d\n", test_num1, count_num_hex(test_num1)); // Saída esperada: 3 (255 -> 3 dígitos decimais)



    printf("\n\nTestando a função itoh:\n\n");
    char *hex_str1 = itoh(test_num1, 1);  // Teste com maiúsculas
    printf("itoh(%d, 1) = %s\n", test_num1, hex_str1);  // Saída esperada: "FF"
    free(hex_str1);


    printf("\n\nTestando a função print_hexa:\n\n");
    print_hexa(test_num1, 'X');  // Teste com 'X', caps > 1, deve imprimir "FF"
	printf("\n");

	printf("\n\nvalor retornado do print_hexa :%d\n\n",print_hexa(test_num1,'X'));
	printf("\n\nvalor retornado do printf original :%d\n\n",printf("%X",test_num1));
    return 0;
}
*/
