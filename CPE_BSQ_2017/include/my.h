/*
** EPITECH PROJECT, 2017
** my
** File description:
** my
*/

#include <fcntl.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_pos
{
	int x;
 	int y;
	int size;
	int x_max;
	int y_max;
} t_pos;

typedef struct s_bsq
{
	int x;
	int y;
	int size;
} t_bsq;

char	*my_strcat(char *dest, char const *src);
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
void	tab_pointer(int tmp, va_list ap);
