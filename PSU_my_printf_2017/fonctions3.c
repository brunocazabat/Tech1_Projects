/*
** EPITECH PROJECT, 2017
** fonctions 3
** File description:
** fonctions 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

void	print_pointeur(va_list arg)
{
	int nb = va_arg(arg, int);
	char *base = "0123456789abcdef";

	my_putchar('0');
	my_putchar('x');
	my_put_nbr_base(nb, base);
}
