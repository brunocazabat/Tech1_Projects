/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** my_strcpy
*/

#include "my.h"

char	*my_strcpy(char *dest, char const *src)
{
	int   i = 0;
	
	while (src[i]) {
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
