#include "libftprintf.h"

static int	num_len(unsigned int	num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

static char	*uitoa(unsigned int	n)
{
	char	*num;
	int		len;

	len = num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	print_unsigned(unsigned int	n)
{
	int		str_len_unum;
	char	*num;

	str_len_unum = 0;
	if (n == 0)
		str_len_unum = print_char('0');
	else
	{
		num = uitoa(n);
		str_len_unum = print_str(num);
		free(num);
	}
	return (str_len_unum);
}

/*
int main()
{
	unsigned int test_num1 = 12345;
	unsigned int test_num2 = 0;
	unsigned int test_num3 = 987654321;

	printf("Testing print_unsigned with %u:\n", test_num1);
	int len1 = print_unsigned(test_num1);
	printf("\nLength: %d\n", len1);

	printf("\nTesting print_unsigned with %u:\n", test_num2);
	int len2 = print_unsigned(test_num2);
	printf("\nLength: %d\n", len2);

	printf("\nTesting print_unsigned with %u:\n", test_num3);
	int len3 = print_unsigned(test_num3);
	printf("\nLength: %d\n", len3);

	return 0;
}
*/
