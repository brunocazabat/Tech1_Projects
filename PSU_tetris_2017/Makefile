##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	tetris_1.c	\
		tetris_2.c	\
		tetris_3.c	\
		tetris_4.c	\

NAME	=	tetris

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -L./lib/ -lmy -lncurses

fclean:
		rm -f $(NAME)

clean:
		rm -f $(OBJ)

re: fclean all clean
