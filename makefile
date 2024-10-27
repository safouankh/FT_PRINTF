SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c
CC = gcc
CFLAGS = -W -W -W
OGB = $(SRC:.c=.o)
NAME = ft_printf.a

all: $(NAME)

$(NAME): $(OGB)
	@ar rc $(NAME) $(OGB)
	@ranlib $(NAME)

clean:
	@rm -rf $(OGB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all