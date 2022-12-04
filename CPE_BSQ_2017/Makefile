##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## rush2
##

SRC	=	main.c		\
		str_size.c	\
		str_to_tab.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

LIB_PATH=	-L./lib/my

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -Ofast -o $(NAME) $(OBJ) $(LIB_PATH)

clean:
	rm -f *~
	rm -f *#
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

