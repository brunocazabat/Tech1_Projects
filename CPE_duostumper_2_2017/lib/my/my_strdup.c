/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char	*my_strdup(char const *str)
{
	char *s;

	if ((s = malloc(my_strlen(str))) == 0)
		return (0);
	my_strcpy(s, str);
	return (s);
}
