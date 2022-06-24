NAME		= libftprintf.a

LIBRARY		= ./libft/

SRC			= ft_printf.c

OBJ			= $(SRC:.c=.o)

CC			= cc

FLAGS		= -Wall -Wextra -Werror

.c.o:
				$(CC) $(FLAGS) -I $(LIBRARY) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
				cd $(LIBRARY) && $(MAKE) && cp -v libft.a ../$(NAME)
				ar rcs $(NAME) $(NAME)

all:		$(NAME)

clean:
				rm -f $(OBJ)
				cd ./libft && $(MAKE) clean

fclean:		clean
				rm -f $(NAME)
				cd ./libft && $(MAKE) fclean

re:			fclean all

.PHONY: all clean fclean re
