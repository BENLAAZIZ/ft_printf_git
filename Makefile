NAME = libftprintf.a

CC = cc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c

OBJ = $(SRC :.c=.o)

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