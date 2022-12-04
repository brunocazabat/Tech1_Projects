/*
** EPITECH PROJECT, 2017
** print
** File description:
** print
*/

#include "my.h"
#include <stdarg.h>

void	print_nbr(va_list arg)
{
	my_put_nbr(va_arg(arg, int));
}

void	print(va_list arg)
{
	my_putchar(va_arg(arg, int));
}

void	print_str(va_list arg)
{
	my_putstr(va_arg(arg, char*));
}

void	print_modulo(va_list arg)
{
	my_putchar('%');
}

void	print_octal(va_list arg)
{
	char *base = "01234567";
	
	my_put_nbr_base(va_arg(arg, int), base);
}
