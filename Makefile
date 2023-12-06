NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putdes.c ft_puthex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o: %.c header.h
	$(CC) $(FLAGS) -o $@ -c $<

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean