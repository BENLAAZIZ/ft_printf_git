NAME = libftprintf.a

CC = CC

RM = rm -f

FLAGS = -Wall, -Wextra and -Werror

SRC = ft_printf.c

OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o: %.c 
	$(CC) $(FLAGS) -o $@ -c $<

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean