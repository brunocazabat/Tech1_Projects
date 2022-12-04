/*
** EPITECH PROJECT, 2018
** tetris_2.c
** File description:
** contain a part of all flags option and the game itself of the tetris
*/

#include "include/my.h"

void	define_default_value(t_data *data)
{
	data->level = 1;
	data->key_left = "^EOD";
	data->key_right = "^EOC";
	data->key_turn = "^EOA";
	data->key_drop = "^EOB";
	data->key_quit = 'q';
	data->key_pause = ' ';
	data->next = "false";
	data->lines = 20;
	data->column = 10;
}

void	print_help()
{
	my_printf("Usage:\t./tetris [options]\n");
	my_printf("Options:\n");
	my_printf("--help\t\t\tDisplay this help\n");
	my_printf("-L --level={num}\tStart Tetris at level num (def: 1)\n");
	my_printf("-l --key-left={K}\tMove the tetrimino LEFT using the K ");
	my_printf("key (def: left arrow)\n");
	my_printf("-r --key-right={K}\tMove the tetrimino RIGHT using the K ");
	my_printf("key (def: right arrow)\n");
	my_printf("-t --key-turn={K}\tTURN the tetrimino clockwise 90d");
	my_printf(" using the K key (def: top arrow)\n");
	my_printf("-d --key-drop={K}\tDROP the tetrimino using the K key ");
	my_printf("(def: down arrow)\n");
	my_printf("-q --key-quit={K}\tQUIT the game using the K key (def: ");
	my_printf("'q' key)\n");
	my_printf("-p --key-pause={K}\tPAUSE/RESTART the game using the K ");
	my_printf("key (def: space bar)\n");
	my_printf("--map-size={row,col}\tSet the numbers of rows and columns");
	my_printf(" of the map (def: 20,10)\n");
	my_printf("-w --without-next\tHide next tetrimino (def: false)\n");
	my_printf("-D --debug\t\tDebug mode (def: false)\n");
}

int	game_init(t_data *data)
{
	int ch;

	initscr();
	clear();
	box_create(data);
	keypad(stdscr, TRUE);
	curs_set(FALSE);
	cbreak();
	while (ch != data->key_quit) {
		ch = getch();
		timeout(100);
		refresh();
		}
	endwin();
	return (0);
}

void	debug(t_data *data)
{
	my_printf("*** DEBUG MODE ***\n");
	my_printf("Key Left : %s\n", data->key_left);
	my_printf("Key Right : %s\n", data->key_right);
	my_printf("Key Turn : %s\n", data->key_turn);
	my_printf("Key Drop : %s\n", data->key_drop);
	my_printf("Key Quit : %c", data->key_quit);
	if (data->key_quit == ' ')
		my_printf("(space)\n");
	else
		my_putchar('\n');
	my_printf("Key Pause : %c", data->key_pause);
	if (data->key_pause == ' ')
		my_printf("(space)\n");
	else
		my_putchar('\n');
	my_printf("Next : %s\n", data->next);
	my_printf("Level : %d\n", data->level);
	my_printf("Size : %d*%d\n", data->lines, data->column);
	my_printf("Tetriminos : 7\n");
	my_printf("Press any key to start Tetris\n");
}
