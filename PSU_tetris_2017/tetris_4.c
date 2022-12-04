/*
** EPITECH PROJECT, 2018
** tetris_4.c
** File description:
** contain some parts of the tetris
*/

#include "include/my.h"

void	background_print()
{
	int pair1;

	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("\n\n\n      _______  _______  _______  ______   _   ______ \n");
	printw("     (_______)(_______)(_______)(_____ L | | / _____)\n");
	printw("         _     _____       _     _____) )| |( (____  \n");
	printw("        | |   |  ___)     | |   |  __  / | | L____ L \n");
	printw("        | |   | |_____    | |   | |  L L | | _____) )\n");
	printw("        |_|   |_______)   |_|   |_|   |_||_|(______/ \n\n");
	printw("    _______  _______  _______  _______  _______  _______\n");
	printw("   (_______)(_______)(_______)(_______)(_______)(_______)\n");
	printw("    _______  _______  _______  _______  _______\n");
	printw("   (_______)(_______)(_______)(_______)(_______)\n");
	printw("    _______  _______  _______  _______\n");
	printw("   (_______)(_______)(_______)(_______)\n");
	printw("    _______  _______  _______\n");
	printw("   (_______)(_______)(_______)\n    _______  _______\n");
	printw("   (_______)(_______)\n    _______\n   (_______)\n");
}

void	get_size(char *str, t_data *data)
{
	int i = 0;
	int j = 0;
	char *line = malloc(sizeof(char) * my_strlen(str));
	char *column = malloc(sizeof(char) * my_strlen(str));

	while (str[i] != ',')
	{
		line[j] = str[i];
		i++;
		j++;
	}
	data->lines = my_getnbr(line);
	j = 0;
	i++;
	while (str[i] != '\0') {
		column[j] = str[i];
		i++;
		j++;
	}
	data->column = my_getnbr(column);
}
