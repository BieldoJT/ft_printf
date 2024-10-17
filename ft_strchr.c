#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (NULL);
}

/*
int main(void)
{
    printf("using strchr: %s\n", strchr("I am optimus prime", 'r'));
    printf("using ft_strchr: %s\n", ft_strchr("I am optimus prime", 'r'));
}*/
