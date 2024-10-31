SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c \
		ft_hexhelper.c
CC = cc
CFLAGS = -W -W -W
OGB = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OGB)
	@ar rc $(NAME) $(OGB)
	@ranlib $(NAME)

clean:
	@rm -rf $(OGB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all