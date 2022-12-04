##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## duo_rush2
##

SRC	=	main.c			\
		print_number_04.c	\
		print_number_59.c	\
		#err.c

OBJ	=	$(SRC:.c=.o)

LIB_PATH=	-L./lib/my

NAME	=	crocus

FLAG 	= 	-Wall -Werror -W -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -Ofast -o $(NAME) $(OBJ) $(LIB_PATH) -lmy $(FLAG)

clean:
	rm -f *~
	rm -f *#
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

