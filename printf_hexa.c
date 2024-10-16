/*
Aqui está um exemplo básico:

Suponha que você queira converter o número 3456 para hexadecimal.
Primeiro, você divide 3456 por 16: o quociente é 216 e o resto é 0 (então, o último dígito será 0).
Depois, divide 216 por 16: o quociente é 13 e o resto é 8 (então, o próximo dígito é 8).
Em seguida, divide 13 por 16: o quociente é 0 e o resto é 13 (em hexadecimal, 13 é representado como D).
Assim, a conversão de 3456 para hexadecimal resulta em D80.

Agora, pensando em código, você vai precisar de:

Uma variável para armazenar o número.
Um loop que continue até que o quociente da divisão seja zero.
Um meio de armazenar os restos de divisão, que serão os dígitos da representação hexadecimal.
Mapear restos maiores que 9 (10 a 15) para suas representações A, B, C, D, E e F.
Como você começaria esse código? Vamos discutir a lógica em termos de pseudocódigo antes de implementarmos?
Algo assim:

Iniciar com um número inteiro.
Fazer um loop: enquanto o número for maior que 0.
Dividir o número por 16.
Guardar o resto (convertendo se necessário para A-F).
Atualizar o número (dividido por 16).
Concatenar os restos na ordem inversa (já que o primeiro resto é o último dígito da resposta).
*/

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

void	print_hexa(unsigned int c, char caps)
{
	char *num_hexa_str;

	if (c == 0)
		ft_putnbr_fd(0,1);
	else
	{
		num_hexa_str = itoh(c, ft_isalpha(caps));
		ft_putstr_fd(num_hexa_str,1);
	}
}


/*
#include <stdio.h>
#include <limits.h>

int main()
{

    printf("\n\nTestando a função count_num_hex:\n\n");
    int test_num1 = 0;
    printf("count_num_hex(%d) = %d\n", test_num1, count_num_hex(test_num1)); // Saída esperada: 3 (255 -> 3 dígitos decimais)



    printf("\n\nTestando a função itoh:\n\n");
    char *hex_str1 = itoh(test_num1, 1);  // Teste com maiúsculas
    printf("itoh(%d, 1) = %s\n", test_num1, hex_str1);  // Saída esperada: "FF"
    free(hex_str1);


    printf("\n\nTestando a função print_hexa:\n\n");
    print_hexa(test_num1, 'a');  // Teste com 'A', caps > 1, deve imprimir "FF"
	printf("\n");

	printf("%X",45);
    return 0;
}*/

