/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** BSQ
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	print_result(char **tab, t_bsq bsq)
{
	int j = bsq.x;
	int i = bsq.y;

	while (i <= bsq.y + (bsq.size - 1)) {
		while (j <= bsq.x + (bsq.size - 1)) {
			tab[i][j] = 'x';
			j++;
		}
		i++;
		j = bsq.x;
	}
	j = 1;
	while (j < my_arraylen(tab) + 1) {
		write(1, tab[j], my_caralen(tab));
		write(1, "\n", 1);
		j++;
	}
	return (0);
}

int	check_square(char **tab, t_pos *square)
{
	int j = square->x;
	int i = square->y;

	while (i <= square->y + (square->size - 1)) {
		while (j <= square->x + (square->size - 1)) {
			if (tab[i][j] != '.')
				return (1);
			j++;
		}
		i++;
		j = square->x;
	}
	square->size++;
	check_square(tab, square);
	return (0);
}

void	init_var(char **tab, t_pos *square, t_bsq *bsq)
{
	square->x = 0;
	square->y = 1;
	square->size = 1;
	square->x_max = my_caralen(tab);
	square->y_max = my_arraylen(tab);
	bsq->size = 0;
	bsq->x = 0;
	bsq->y = 0;
}

int	init_calc(char **tab)
{
	t_pos square;
	t_bsq bsq;

	init_var(tab, &square, &bsq);
	while (square.y <= (square.y_max - square.size + 1)) {
		while (square.x <= (square.x_max - square.size + 1)) {
			check_square(tab, &square);
			if ((square.size - 1) > bsq.size) {
				bsq.x = square.x;
				bsq.y = square.y;
				bsq.size = square.size - 1;
			}
			square.x++;
		}
		square.y++;
		square.x = 0;
	}
	print_result(tab, bsq);
	return (0);
}

int	main(int ac, char **av)
{
	char **tab = NULL;

	if (ac != 2)
		return (84);
        if (av == NULL)
		return (84);
	tab = calc_size(av[1]);
	if (tab == NULL)
		return (84);
	init_calc(tab);
	return (0);
}
