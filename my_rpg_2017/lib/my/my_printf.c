/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>

int	sort_flag(char flag)
{
	int i = 0;
	char *flags = "dsic%xXoubpl";
	while (i <= 14) {
		if (flag == flags[i])
			return (i);
		i++;
		if (i == 13)
			return (13);
	}
	return (i);
}

void	tab_pointer(int tmp, va_list ap)
{
	void (*tab[12])(va_list);
	tab[0] = print_nbr;
	tab[1] = print_str;
	tab[2] = print_nbr;
	tab[3] = print;
	tab[4] = print_modulo;
	tab[5] = print_hexa_x;
	tab[6] = print_hexa_X;
	tab[7] = print_octal;
	tab[8] = print_nbr_u;
	tab[9] = print_bina;
	tab[10] = print_hexa_p;
	tab[11] = print_nbr_l;
	tab[tmp](ap);
}

int	my_printf(char *format, ...)
{
	int i = 0;
	int tmp;
	va_list ap;
	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%') {
			i++;
			while (format[i] == ' ' || format[i] == '#') {
				i++;
			}
			tmp = sort_flag(format[i]);
			if (tmp >= 0 && tmp <= 11)
				tab_pointer(tmp, ap);
			else my_putchar(format[i]);
		} else
			my_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
