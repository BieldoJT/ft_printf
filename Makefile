CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS =
OBJS = $(SRCS:.c=.o)


all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar rcs $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
