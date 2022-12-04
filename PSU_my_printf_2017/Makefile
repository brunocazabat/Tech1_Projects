##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_putchar.c		\
		my_put_nbr.c		\
		my_strlen.c		\
		my_putstr.c		\
		my_printf.c		\
		my_put_nbr_base_np.c	\
		my_put_nbr_long.c	\
		my_put_nbr_base.c	\
		my_put_non_printable.c	\
		fonctions1.c		\
		fonctions2.c		\
		fonctions3.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

fclean:
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all clean
