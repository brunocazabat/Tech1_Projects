/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../include/flo.h"

int	my_put_nbr_file(int nb, int fd)
{
	if (nb < 0) {
		write(1, "-", 1);
		return (my_put_nbr(-nb));
	}
	if (nb >= 10)
		my_put_nbr(nb/10);
	write(1, nb % 10 + "0123456789", 1);
}
