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
#include <string.h>
#include <time.h>
#include <termios.h>

typedef struct s_data
{
	int	word;
	char	**tab;
	char	*str;
	char	*line;
} t_data;

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_put_u(unsigned int nb);
int	my_put_long(long nb);
int	my_put_long_long(long long nb);
int	my_put_nbr_base(int nb, char* base);
int	my_putstr(char const *str);
int	my_printf(char *fmt, ...);
int	my_getnbr(char *str);
int	my_strlen(char const *str);
int	size(char *path);
int	open_file(char *str, t_data *data);
int	first_len(char *str);
int	nb_cara(char *str, int start);
int	nb_line(char *str);
int	my_arraylen(char **tab);
int	my_caralen(char **tab);
int	size(char *path);
char	**calc_size(char *filepath);
char	**str_to_tab(char *str);
char	**str_tab(char **tab, char *str);
char	**malloc_tab(char *path);
char	*hide_word(t_data *data);
char	*good_letter(t_data *data, char *sword);
int	try_rounds(t_data *data, char *);
char	*get_next_line(int fg);
int	pick_random_word(t_data *data, char **tab);

#endif /* MY_H */
