/*
** EPITECH PROJECT, 2017
** my_put_nbr_base
** File description:
** my_put_nbr_base
*/

#include "my.h"

int	my_put_nbr_base_p(long nb, char *base)
{
	long res;
	long rest;
	
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	res = nb / my_strlen(base);
	rest = nb % my_strlen(base);
	if (res > 0)
		my_put_nbr_base(res, base);
	my_putchar(base[rest]);
	return (0);
}
