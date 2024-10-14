#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			//colocar os casos aqui!!!
		}
		else
			return ;//usar o putchar aqui!!! usar o str++;
		str++;
	}
}
