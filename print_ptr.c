#include "libftprintf.h"


static int count_num_ptr(unsigned long num)
{
	int	count;

	count = 0;
	while (num > 0)
	{
		count++;
		num /= 16;
	}
	return (count);
}

static char *itoptr(unsigned long ptr)
{
	char	*ptr_str;
	int	len_str;
	unsigned long	i;

	len_str = count_num_ptr(ptr);
	ptr_str = (char *)ft_calloc((len_str + 1), sizeof(char));
	if (!ptr_str)
		return (NULL);
	i = 0;
	while (ptr > 0)
	{
		i = (ptr % 16);
		if(i > 9)
			ptr_str[--len_str] = i + 87;
		else
			ptr_str[--len_str] = i + 48;
		ptr /= 16;
	}
	return (ptr_str);
}


int	print_ptr(void *ptr)
{
	char	*str;

	if(ptr == NULL)
	{
		str = "(nil)";
		return(print_str(str));
	}
	else
	{
		str = itoptr((unsigned long)ptr);
		ft_putstr_fd("0x",1);
		print_str(str);
		return (ft_strlen(str) + 2);
	}
}
/*
int main(void)
{
    char *num = "8854245";
    char *ptr = num;
    int *null_ptr = NULL;

    printf("Teste com ponteiro não nulo:\n");
    print_ptr(ptr); // minnha
	printf("\n%p",ptr);

    printf("\n\nTeste com ponteiro nulo:\n");
    print_ptr(null_ptr);
	printf("\n%p",null_ptr);

	printf("\n\nTeste do retorno do inteiro\n");
	printf("%d\n",print_ptr(ptr));
	printf("\n%d",printf("%p",ptr));

    return 0;
}*/

