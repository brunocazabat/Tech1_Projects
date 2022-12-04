/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** my_strcat
*/

#include "../include/flo.h"

int	my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*my_strcat(char *dest, char const *src)
{
	int dest_len = my_strlen(dest);
	int src_len = my_strlen(src);
	int i = 0;
	char *cat = malloc(sizeof(char) * (dest_len + src_len) + 1);

	while (dest[i] != '\0') {
		cat[i] = dest[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0') {
		cat[dest_len + i] = src[i];
		i++;
	}
	cat[dest_len + i] = '\0';

	return (cat);
}
