/*
** EPITECH PROJECT, 2017
** my_put_long.c
** File description:
** put_long
*/

#include "my.h"

int	my_put_long(long nb)
{
	int	cmp = 1;

	if (nb >= 0)
		nb = nb * -1;
	else
		my_putchar('-');
	while ((nb / cmp) <= -9)
		cmp *= 10;
	cmp *= -1;
	while (cmp != 0) {
		my_putchar((nb / cmp) + '0');
		nb %= cmp;
		cmp /= 10;
	}
	return (0);
}
