SRC		=	sf_printf.c

OBJ		= $(SRC:.c=.o)

NAME	= libftprintf.a

CC		= cc

FLAGS	= -Wall -Wextra -Werror

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
