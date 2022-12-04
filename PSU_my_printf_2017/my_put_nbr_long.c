/*
** EPITECH PROJECT, 2017
** my_put_nbr_long.c
** File description:
** put a nbr wich is long
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

int	my_put_nbr_long(long nb)
{
	long cmp = 0;

	if (nb < 0) {
		my_putchar(nb + '0');
		nb = nb * -1;
		if (nb >= 0 && nb <= 9)
			my_put_nbr_long(nb);
	}

	if (nb >= 0 && nb <= 9)
		my_putchar(nb + '0');
	if (nb > 9) {
		cmp = nb % 10;
		my_put_nbr_long(nb / 10);
		my_putchar(cmp + '0');
	}
	return (0);
}
