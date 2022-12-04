##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## duo_rush6
##

SRC	=	src/main.c		\
		src/init_struct.c	\
		src/parsing.c		\
		src/textcount.c		\
		src/manage_list.c

OBJ	=	$(SRC:.c=.o)

NAME	=	text_count

CFLAGS	+=	-g3 -Wall -Werror -Wextra

CFLAGS	+=	-I include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	find . -type f -name "*~" -delete -or -name "#*\#" -delete -or -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

