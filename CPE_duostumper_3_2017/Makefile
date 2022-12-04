##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## duo_rush6
##

SRC	=	main.c			\
		get_next_line.c		\
		game.c			\
		map.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	tictactoe

FLAG 	= 	-Wall -Werror -W

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -g3 $(OBJ) $(FLAG)

clean:
	rm -f *~
	rm -f *#
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

