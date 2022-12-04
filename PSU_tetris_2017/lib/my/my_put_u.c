/*
** EPITECH PROJECT, 2017
** my_put_u.c
** File description:
** put_u
*/

#include "my.h"

int	my_put_u(unsigned int nb)
{
	int	cmp;

	if (nb >= 0 && nb <= 9)
		my_putchar(nb + '0');
	if (nb > 9) {
		cmp = nb % 10;
		my_put_u(nb / 10);
		my_putchar(cmp + '0');
	}
	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
		if (nb >= 0 && nb <= 9)
			my_put_u(nb);
	}
	return (0);
}
