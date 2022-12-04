/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** my_getnbr
*/

#include "my.h"

int	my_getnbr(char const *str)
{
	int nb = 0;
	int neg = 1;
	int i = 0;

	while (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			neg = neg * -1;
		i = i + 1;
	}
	while (str[i]) {
		if (str[i] >= 48 && str[i] <= 57) {
			nb = nb * 10;
			nb = nb + str[i] - 48;
			i = i + 1;
		}
		else
			return (nb * neg);
	}
	return (nb * neg);
}
