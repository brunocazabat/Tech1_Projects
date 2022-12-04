/*
** EPITECH PROJECT, 2017
** str_tab
** File description:
** str_tab
*/

#include "include/my.h"

int	first_len(char *str)
{
	int i = 0;

	while (str[i] != '\n')
		i++;
	i++;
	return (i);
}

int	nb_cara(char *str, int start)
{
	int i = 0;

	while (str[start] != '\n') {
		i++;
		start++;
	}
	return (i);
}

int	nb_line(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] == '\n')
			j++;
		i++;
	}
	j++;
	return (j);
}

int	my_arraylen(char **tab)
{
	int i = 1;

	while (tab[i] != NULL)
		i++;
	return (i - 2);
}

int	my_caralen(char **tab)
{
	int i = 0;

	while (tab[1][i] != '\0')
		i++;
	return (i);
}
