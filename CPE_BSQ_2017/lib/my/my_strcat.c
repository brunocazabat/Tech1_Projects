/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** my_strcat
*/

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
	int i = 0;
	int len = my_strlen(dest);

	while (src[i] != '\0') {
		dest[len + i] = src[i];
		i = i + 1;
	}
	dest[len + i] = '\0';
	return (dest);
}
