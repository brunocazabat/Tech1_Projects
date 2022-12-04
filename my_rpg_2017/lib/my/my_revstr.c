/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** my_revstr
*/

#include "my.h"

char	*my_revstr(char *str)
{
	int i = 0;
	int j = my_strlen(str) - 1;
	char c;

	while (i < j) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i = i + 1;
		j = j - 1;
	}
	return (str);
}
