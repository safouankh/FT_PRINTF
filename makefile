SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putfloat.c
CC = gcc
CFLAGS = -W -W -W
OGB = $(SRC:.c=.o)
NAME = ft_printf.a

all: $(NAME)

$(NAME): $(OGB)
	ar rc $(NAME) $(OGB)
	ranlib $(NAME)

clean:
	@rm *.o

fclean: clean
	@rm *.a

re: fclean all