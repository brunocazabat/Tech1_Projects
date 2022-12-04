/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** my_strncat
*/

#include "my.h"

char	*my_strncat(char * dest, char const *src, int nb)
{
	int len = my_strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < nb) {
		dest[len + i] = src[i];
		i = i + 1;
	}
	dest[len + i] = '\0';
	return (dest);
}
