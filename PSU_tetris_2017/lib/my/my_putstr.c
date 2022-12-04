/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** put_str
*/

#include "my.h"

int	my_putstr(char const *str)
{
	int	x = 0;

	while (str[x] != '\0') {
		my_putchar(str[x]);
		x = x + 1;
	}
	return (0);
}
