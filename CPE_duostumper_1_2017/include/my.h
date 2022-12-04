/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <sys/ioctl.h>
#include <termios.h>

typedef struct s_data
{
	int lettre;
	char *chiffre;
	char *asset;
	int ligne;
	int saut_de_ligne;
} t_data;

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_put_u(unsigned int nb);
int	my_put_long(long nb);
int	my_put_long_long(long long nb);
int	my_put_nbr_base(int nb, char* base);
int	my_putstr(char const *str);
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
int     my_strlendir(char *filepath);
char    **sort_a(int ac, char **tab);
void    check_mystr(int ac, char **av);
int     first_len(char *str);
int     nb_cara(char *str, int start);
int     nb_line(char *str);
int     my_arraylen(char **tab);
int     my_caralen(char **tab);
int     size(char *path);
char    **calc_size(char *filepath);
char    **str_to_tab(char *str);
char    **str_tab(char **tab, char *str);
char    **malloc_tab(char *path);
int	check_input(char *str);
void	print0(int ligne);
void	print1(int ligne);
void	print2(int ligne);
void	print3(int ligne);
void	print4(int ligne);
void	print5(int ligne);
void	print6(int ligne);
void	print7(int ligne);
void	print8(int ligne);
void	print9(int ligne);
int	my_strlen(char const *str);

#endif /* MY_H */
