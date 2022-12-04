##
## EPITECH PROJECT, 2017
## stumper
## File description:
## stumper
##

LIBSRC     =	lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strlen.c

SRC	=	main.c	\
		my_screensaver.c	\
		my_screensaver2.c

OBJ	=	$(LIBSRC:.c=.o)

FLAGS	=	-W -Wall -Werror -Wextra -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

NAME	=	my_screensaver

LIB	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc  $(LIB) $(OBJ)
	cp $(LIB) lib/my/
	gcc -o $(NAME) $(SRC) $(FLAGS) $(LIB)
	rm $(LIB)


clean:
	find . -type f -name "*~" -delete -or -name "#*#" -delete -or -name "*.o" -delete

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean fclean re
