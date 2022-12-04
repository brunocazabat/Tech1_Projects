/*
** EPITECH PROJECT, 2017
** outils.c
** File description:
** outils printf
*/

#include <stdarg.h>
#include "my.h"

void	print_nbr(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void	print_char(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void	print_str(va_list ap)
{
	my_putstr(va_arg(ap, char*));
}

void	print_nbr_oct(va_list ap)
{
	char* base = "01234567";

	my_put_nbr_base(va_arg(ap, int), base);
}

void	print_nbr_hex(va_list ap)
{
	char* base = "0123456789abcdef";

	my_put_nbr_base(va_arg(ap, int), base);
}
