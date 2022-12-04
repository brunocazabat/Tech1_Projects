/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "include/my.h"

int	flag_sort(char flag)
{
	int i = 0;
	char *model = "dsic%xXSubop";

	while (i < 13) {
		if (flag == model[i])
			return (i);
		i++;
	}
	return (0);
}
	
int	my_printf(char *fmt, ...)
{
	int i = 0;
	va_list arg;
	va_start(arg, fmt);
	void (*fct[12])(va_list) = {print_putnbr, print_str, print_putnbr,
				    print_char, print_modulo, print_hexa,
				    print_HEXA, print_S, print_deci,
				    print_bin, print_octal, print_pointeur};

	while (fmt[i] != '\0') {
		if (fmt[i] == '%') {
			i++;
			fct[flag_sort(fmt[i])](arg);
		} else {
			my_putchar(fmt[i]);
		}
		i++;
	}
	va_end(arg);
	return (0);
}
