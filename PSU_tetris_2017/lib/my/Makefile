##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	my_putchar.c		\
		my_put_nbr.c		\
		my_put_u.c		\
		my_put_nbr_base.c	\
		my_put_long.c		\
		my_put_long_long.c	\
		my_putstr.c		\
		my_strlen.c		\
		my_printf.c		\
		my_getnbr.c		\
		outils.c		\
		outils2.c

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp my.h ./include

fclean:
		rm -f $(NAME)

clean:
		rm -f $(OBJ)

re: 		fclean all clean
