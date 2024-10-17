CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a


SRCS = ft_calloc.c ft_isalpha.c ft_memcpy.c ft_strdup.c ft_bzero.c ft_itoa.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strchr.c ft_strlen.c ft_printf.c print_char.c print_nbr.c print_ptr.c print_str.c print_unsigend.c print_hexa.c


OBJS = $(SRCS:.c=.o)



all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
