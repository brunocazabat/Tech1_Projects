/*
** EPITECH PROJECT, 2017
** my_put_nbr_base.c
** File description:
** base 2 8 10 16
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

int	my_put_nbr_base(int nb, char *base)
{
	int res;
	int rest;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
	}
	res = nb / my_strlen(base);
	rest = nb % my_strlen(base);
	if (res > 0)
		my_put_nbr_base(res, base);
	my_putchar(base[rest]);
	return (0);
}
