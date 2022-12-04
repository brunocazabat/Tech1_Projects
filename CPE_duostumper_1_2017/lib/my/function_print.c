/*
** EPITECH PROJECT, 2017
** function2
** File description:
** function2
*/

#include <stdarg.h>
#include "my.h"

void	print_hexa_x(va_list arg)
{
	char *base = "0123456789abcdef";

	my_put_nbr_base(va_arg(arg, int), base);
}

void	print_hexa_X(va_list arg)
{
	char *base = "0123456789ABCDEF";

	my_put_nbr_base(va_arg(arg, int), base);
}

void	print_bina(va_list arg)
{
	char *base = "01";

	my_put_nbr_base(va_arg(arg, int), base);
}

void	print_hexa_p(va_list arg)
{
	char *base = "0123456789abcdef";

	write (1, "0x", 2);
	my_put_nbr_base_p(va_arg(arg, long), base);
}

void	print_nbr_l(va_list arg)
{
	my_put_nbr_l(va_arg(arg, long long));
}
