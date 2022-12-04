/*
** EPITECH PROJECT, 2017
** my_putnbr
** File description:
** my_putnbr
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../Include/my.h"

int	my_put_nbr(int nb)
{
	if (nb < 0) {
		nb = nb * -1;
		my_putchar('-');
	}
	if (nb >= 10) {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	else
		my_putchar(nb + '0');
	return (0);
}
