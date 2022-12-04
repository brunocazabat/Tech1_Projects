##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## duo_rush2
##

SRC	=	main.c			\
		str_size.c		\
		str_to_tab.c		\
		get_next_line.c		\
		func.c			\

OBJ	=	$(SRC:.c=.o)

LIB_PATH=	-L./lib/my

NAME	=	lingo

FLAG 	= 	-Wall -Werror -W -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIB_PATH) $(FLAG)

clean:
	rm -f *~
	rm -f *#
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

