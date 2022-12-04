/*
** EPITECH PROJECT, 2017
** fonctions 1
** File description:
** fonctions 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

void	print_char(va_list arg)
{
	my_putchar(va_arg(arg, int));
}

void	print_str(va_list arg)
{
	my_putstr(va_arg(arg, char*));
}

void	print_putnbr(va_list arg)
{
	my_put_nbr(va_arg(arg, int));
}

void	print_modulo()
{
	my_putchar('%');
}

void    print_HEXA(va_list arg)
{
	int nb = va_arg(arg, int);
	char *base = "0123456789ABCDEF";

	my_put_nbr_base(nb, base);
}
