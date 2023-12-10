NAME = libftprintf.a

CC = cc 

FLAGS = -Wall -Wextra -Werror

RM = rm 

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putdec.c

OBJ = $(SRC: .c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
        ar rc $(NAME) $(OBJ)

%o : %c ft_printf.h
	$(CC) $(FLAGS) -o $@ -c $<

clean : 
	   $(RM) $(OBJ)

fclean : clean 
		$(RM) $(NAME)

re : fclean all

.PHONY : clean