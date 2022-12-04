/*
** EPITECH PROJECT, 2017
** outils.c
** File description:
** outils printf
*/

#include <stdarg.h>
#include "my.h"

void	print_nbr_Hex(va_list ap)
{
	char* base = "01234567ABCDEF";

	my_put_nbr_base(va_arg(ap, int), base);
}

void	print_nbr_bin(va_list ap)
{
	char* base = "01";

	my_put_nbr_base(va_arg(ap, int), base);
}

void	print_pointeur(va_list ap)
{
	char* base = "0123456789abcdef";

	my_putstr("0x");
	my_put_nbr_base(va_arg(ap, int), base);
}

void	print_u(va_list ap)
{
	my_put_u(va_arg(ap, unsigned int));
}

void	print_l(va_list ap)
{
	my_put_long_long(va_arg(ap, long long));
}
