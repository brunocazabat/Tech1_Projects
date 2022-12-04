/*
** EPITECH PROJECT, 2017
** my_put_non_printable.c
** File description:
** my_printf_%S
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

int	my_put_non_printable(int nb)
{
	char *base = "01234567";

	if (nb < 10) {
		my_putstr("\\00");
		my_put_nbr_base_np(nb, base);
	}

	if (nb >= 10 && nb <= 31) {
		my_putstr("\\0");
		my_put_nbr_base_np(nb, base);
	}

	if (nb == 127) {
		my_putstr("\\");
		my_put_nbr_base_np(nb, base);
	}

	else
		my_putchar(nb);
	return (0);
}
