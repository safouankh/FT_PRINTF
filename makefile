SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c \
		ft_hexhelper.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OGB = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OGB)
	ar rcs $(NAME) $(OGB)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OGB)

fclean: clean
	rm -f $(NAME)

re: fclean all