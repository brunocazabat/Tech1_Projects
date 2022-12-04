/*
** EPITECH PROJECT, 2018
** tetris_1.c
** File description:
** contain the main and the flag detector for the tetris
*/

#include "include/my.h"

void	flag_select(int ac, char **av, t_data *data)
{
	int a = 0;
	int *size_map;
	int index = 0;
	char *short_opt = "L:l:r:t:d:q:p:wD";

	static struct option long_opt[] = {
		{"help",		0,	NULL,	'h'},
		{"level",		1,	NULL,	'L'},
		{"key-left",		1,	NULL,	'l'},
		{"key-right",		1,	NULL,	'r'},
		{"key-turn",		1,	NULL,	't'},
		{"key-drop",		1,	NULL,	'd'},
		{"key-quit",		1,	NULL,	'q'},
		{"key-pause",		1,	NULL,	'p'},
		{"map-size",		1,	NULL,	'm'},
		{"without-next",	1,	NULL,	'w'},
		{"debug",		0,	NULL,	'D'},
		{0,			0,	0,	0}
	};

	while ((a = getopt_long(ac, av, short_opt, long_opt, &index)) != -1) {
		switch (a) {
		case 'h' :
			print_help();
			break;
		case 'L' :
			data->level = my_getnbr(optarg);
			break;
		case 'l' :
			data->key_left = optarg;
			break;
		case 'r' :
			data->key_right = optarg;
			break;
		case 't' :
			data->key_turn = optarg;
			break;
		case 'd' :
			data->key_drop = optarg;
			break;
		case 'q' :
			data->key_quit = optarg[0];
			break;
		case 'p' :
			data->key_pause = optarg[0];
			break;
		case 'm' :
			get_size(optarg, data);
			break;
		case 'w' :
			data->next = optarg;
			break;
		case 'D' :
			debug(data);
			break;
		}
	}
}

int	main(int ac, char **av)
{
	t_data data;

	define_default_value(&data);

	if (av[1] != NULL)
		flag_select(ac, av, &data);
	else
		game_init(&data);
	return (0);
}
