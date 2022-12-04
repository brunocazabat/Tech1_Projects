/*
** EPITECH PROJECT, 2018
** tetris_3.c
** File description:
** contain most of the parts of the game itself
*/

#include "include/my.h"

int	wait_keys(t_data *data)
{
	struct termios oldT;
	struct termios newT;
	char c;
	
	newT=oldT;
	newT.c_lflag &= ~ECHO;
	newT.c_lflag &= ~ICANON;
	ioctl(0, TCGETS, &oldT);
	newT.c_lflag &= ~ICANON;
	ioctl(0, TCSETS, &newT);
	read(0, &c, 1);
	ioctl(0, TCSETS, &oldT);
	game_init(data);
	return (0);
}

void	box_game(t_data *data)
{
	WINDOW *game;
	int pair2;

	start_color();
	init_pair(2, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(2));
	game = subwin(stdscr, data->lines, data->column, 2, 65);
	wborder(game, ACS_HLINE, ACS_HLINE, ACS_HLINE, ACS_VLINE, 0, 0, 0, 0);
	mvwprintw(game, 0, 2, "Game");
	attroff(COLOR_PAIR(2));
}

void	box_next(t_data *data)
{
	WINDOW *next;
	int pair3;

	start_color();
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	attron(COLOR_PAIR(3));
	next = subwin(stdscr, 10, 15, 17, 41);
	wborder(next, ACS_HLINE, ACS_HLINE, ACS_HLINE, ACS_VLINE, 0, 0, 0, 0);
	mvwprintw(next, 0, 2, "Next");
	attroff(COLOR_PAIR(3));
}

void	box_score(t_data *data)
{
	WINDOW *score;
	int pair4;

	start_color();
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
	attron(COLOR_PAIR(4));
	score = subwin(stdscr, 15, 24, 24, 10);
	wborder(score, ACS_HLINE, ACS_HLINE, ACS_HLINE, ACS_VLINE, 0, 0, 0, 0);
	mvwprintw(score, 0, 2, "Score");
	mvwprintw(score, 3, 2, "High Score :");
	mvwprintw(score, 4, 2, "Score :");
	mvwprintw(score, 6, 2, "Lines : %d", (data->lines-2));
	mvwprintw(score, 7, 2, "Level : %d", data->level);
	mvwprintw(score, 9, 2, "Timer :");
	mvwprintw(score, 11, 2, "Map Size : %d*%d", data->lines, data->column);
	attroff(COLOR_PAIR(4));
}

int	box_create(t_data *data)
{
	background_print();
	box_game(data);
	box_score(data);
	box_next(data);
	return (0);
}
