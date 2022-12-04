/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** strlen
*/

#include "my.h"

int     my_strlen(char const *str)
{
        int     x = 0;
	int	compt = 0;
        while (str[x] != '\0') {
                x = x + 1;
		compt = compt + 1;

        }
	return (compt);
}
