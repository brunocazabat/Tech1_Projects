/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"
#include "outils.c"
#include "outils2.c"

int	flag_detect(char flag)
{
	int r = 0;
	char* mod = "dcsi%ohHbpul";

	while (mod[r] != '\0') {
		if (mod[r] == flag)
			return (r);
		r = r + 1;
	}
	return (0);
}

void	def_array(int i, va_list ap)
{
	void (*fonction[12])(va_list);
	fonction[0] = print_nbr;
	fonction[1] = print_char;
	fonction[2] = print_str;
	fonction[3] = print_nbr;
	fonction[4] = print_char;
	fonction[5] = print_nbr_oct;
	fonction[6] = print_nbr_hex;
	fonction[7] = print_nbr_Hex;
	fonction[8] = print_nbr_bin;
	fonction[9] = print_pointeur;
	fonction[10] = print_u;
	fonction[11] = print_l;
	fonction[i](ap);
}

int	my_printf(char *fmt, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, fmt);

	while (fmt[i] != '\0') {
		if (fmt[i] == '%' && fmt[i + 1] != '\0') {
			i = i + 1;
			def_array((flag_detect(fmt[i])),ap);
		}
		else
			my_putchar(fmt[i]);
		i = i + 1;
	}
	va_end(ap);
}
