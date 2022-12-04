/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
	int sup;

	while ((sup = my_is_prime(nb)) == 0)
		nb = nb + 1;
	return (nb);
}
