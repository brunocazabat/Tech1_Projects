/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** a
*/

#include "my.h"

long	my_put_nbr_u(long nb)
{
	if (nb < 0) {
		write(1, "-", 1);
		return (my_put_nbr(-nb));
	}
	if (nb >= 10)
		my_put_nbr(nb/10);
	write(1, nb % 10 + "0123456789", 1);
}
