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

typedef struct	s_occ		t_occ;

struct	s_occ
{
	char	c;
	int	i;
	int	use;
	t_occ	*next;
};

typedef struct	s_data
{
	char	*str;
	char	*search;
	t_occ	*occ;
	int	opt_t;
	int	opt_r;
}		t_data;

t_data		*init_struct(void);

int	check_str(int ac, char **av, int i, t_data *data);
int	check_option(char *str, t_data *data);
int	parse_me(int ac, char **av, t_data *data);

int	add_occ(t_occ **list, char c, int i);
int	check_found(char *str, t_data *data);
int	search_occurence(char *str, char *search, t_data *data);
int	textcount(t_data *data);

int	bubble_sort(t_data *data);

#endif /* MY_H */
