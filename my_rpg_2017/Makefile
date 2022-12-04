##
## EPITECH PROJECT, 2018
## -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window
## File description:
## -lc_graph_prog
##

SRC	=	./src/my_rpg_main.c			\
		./src/my_rpg_menu.c			\
		./src/others_functions1.c		\
		./src/others_functions2.c		\
		./src/main_game.c			\
		./src/character.c			\
		./src/combat1.c				\
		./src/dialogs.c				\
		./src/get_dialogue.c			\
		./src/init_game1.c			\
		./src/init_game2.c			\
		./src/my_strcat.c			\
		./src/option1.c				\
		./src/option2.c				\
		./src/option3.c				\
		./src/option4.c				\
		./src/pause.c				\
		./src/variables.c			\
		./src/inventory.c			\
		./src/stats_to_str.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

LIB_PATH=	-L./lib/my

FLAG	=	-Wall -Werror -Wextra -g3 -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC) $(LIB_PATH) $(FLAG)

fclean:
	rm -f $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

re: fclean all clean
