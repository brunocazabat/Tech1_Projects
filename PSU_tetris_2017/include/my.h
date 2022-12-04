/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <curses.h>
#include <getopt.h>
#include <sys/ioctl.h>
#include <termios.h>

typedef struct s_data
{
	char *key_left;
	char *key_right;
	char *key_turn;
	char *key_drop;
	char *next;
	char key_quit;
	char key_pause;
	int level;
	int column;
	int lines;
} t_data;

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_put_u(unsigned int nb);
int	my_put_long(long nb);
int	my_put_long_long(long long nb);
int	my_put_nbr_base(int nb, char* base);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_printf(char *fmt, ...);
void	get_size(char *str, t_data *data);
void	display_map();
void	print_help();
int	game_init(t_data *data);
int	wait_keys();
void	background_print();
void	box_game(t_data *data);
void	box_next(t_data *data);
void	box_score(t_data *data);
int	box_create(t_data *data);
void	debug(t_data *data);
void	define_default_value(t_data *data);
int	my_getnbr(char *str);
void	get_size(char *str, t_data *data);

#endif /* MY_H */
