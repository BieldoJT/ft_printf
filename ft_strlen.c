#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
    char *s = "";

    printf("using strlen %lu\n", strlen(s));
    printf("using ft_strlen %zu\n", ft_strlen(s));
}*/
