/*
** EPITECH PROJECT, 2017
** fonctions 2
** File description:
** fonctions 2
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

void	print_hexa(va_list arg)
{
	int nb = va_arg(arg, int);
	char *base = "0123456789abcdef";

	my_put_nbr_base(nb, base);
}

void	print_bin(va_list arg)
{
	int nb = va_arg(arg, int);
	char *base = "01";
	
	my_put_nbr_base(nb, base);
}

void	print_octal(va_list arg)
{
	int nb = va_arg(arg, int);
	char *base = "01234567";

	my_put_nbr_base(nb, base);
}

void	print_S(va_list arg)
{
	int nb = va_arg(arg, int);

	my_put_non_printable(nb);
}

void	print_deci(va_list arg)
{
	long nb = va_arg(arg, long);
	my_put_nbr_long(nb);
}
