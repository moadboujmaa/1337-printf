SRC = ft_printf.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_puthexa.c ft_putpointer.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
CC = cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all